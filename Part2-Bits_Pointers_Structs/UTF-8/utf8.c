
#include "utf8.h"

/* PRIVATE DECLARATIONS START */
int calculateByteAmount(unsigned int number);

/* PRIVATE DECLARATIONS END */

void utf8_koodaa(unsigned int character, unsigned char* utf8) {
    unsigned int x        = character;
    int          i;
    int          byte_len = calculateByteAmount(character);

    if (byte_len < 0) {
        return;
    }

    if (character == 0) {
        utf8[0] = 0;
        utf8[1] = '\0';
    }

    for (i = 0; i < byte_len; i++) {
        utf8[i] = 0;
    }

    /* set header bits in first byte */
    switch (byte_len) {
        case 1:
            utf8[0] = (0 << 7);
            break;
        case 2:
            utf8[0] = (3 << 6); /* 3 = 0b11 */
            break;
        case 3:
            utf8[0] = (7 << 5); /* 7 = 0b111 */
            break;
        case 4:
            utf8[0] = (15 << 4); /* 15 = 0b1111 */
            break;
    }

    /* set header bits in the rest of the bytes */
    for (i = 1; i <= byte_len - 1; i++) {
        utf8[i] = (2 << 6); /* 2 = 0b10 */
    }

    /* set data bits in bytes */
    for (i = 0; i < byte_len; i++) {
        if (i == 0) {
            utf8[i] |= ((x >> (6 * (byte_len - 1 - i))) & 0x3F);
        } else {
            utf8[i] |= ((x >> (6 * (byte_len - 1 - i))) & 0x3F) | (1 << 7);
        }
    }


    utf8[byte_len] = '\0';
}

int calculateByteAmount(unsigned int number) {
    int bit_amount = 0;

    while (number > 0) {
        number = (number >> 1);
        bit_amount++;
    }

    if (bit_amount <= 7) {
        return 1;
    } else if (bit_amount <= 11) {
        return 2;
    } else if (bit_amount <= 16) {
        return 3;
    } else if (bit_amount <= 21) {
        return 4;
    }
    /* invalid number for utf-8 */
    return -1;

}
