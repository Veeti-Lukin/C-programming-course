#include "bitit.h"

#include <limits.h>
#include <stdio.h>

/* START private declarations */
struct BitInfo {
    unsigned int zero_amount;
    unsigned int one_amount;
    char         binary_representation[sizeof(long int) * CHAR_BIT + 1];
};
typedef struct BitInfo BitInfo;

BitInfo getBitInfo(long decimal, size_t amount_of_bits);


/* END private declarations */



void scharBitit2(signed char x) {
    BitInfo bit_info = getBitInfo(x, sizeof(char) * CHAR_BIT);
    printf("%d\n", x);
    printf("%s\n", bit_info.binary_representation);
    printf("%d\n", bit_info.zero_amount);
    printf("%d\n", bit_info.one_amount);
}

void shortBitit2(short int x) {
    BitInfo bit_info = getBitInfo(x, sizeof(short) * CHAR_BIT);
    printf("%d\n", x);
    printf("%s\n", bit_info.binary_representation);
    printf("%d\n", bit_info.zero_amount);
    printf("%d\n", bit_info.one_amount);
}

void intBitit2(int x) {
    BitInfo bit_info = getBitInfo(x, sizeof(int) * CHAR_BIT);
    printf("%d\n", x);
    printf("%s\n", bit_info.binary_representation);
    printf("%d\n", bit_info.zero_amount);
    printf("%d\n", bit_info.one_amount);
}

void longBitit2(long int x) {
    BitInfo bit_info = getBitInfo(x, sizeof(long) * CHAR_BIT);
    printf("%ld\n", x);
    printf("%s\n", bit_info.binary_representation);
    printf("%d\n", bit_info.zero_amount);
    printf("%d\n", bit_info.one_amount);
}

/* Private functions */
BitInfo getBitInfo(long decimal, size_t amount_of_bits) {
    size_t i;
    size_t string_back_iterator = amount_of_bits - 1;

    BitInfo bit_info;
    bit_info.zero_amount = 0;
    bit_info.one_amount  = 0;


    for (i = 0; i < amount_of_bits; i++) {
        unsigned int bit = (decimal >> i) & 1;

        if (bit == 0) {
            bit_info.zero_amount++;
            bit_info.binary_representation[string_back_iterator] = '0';
        } else {
            bit_info.one_amount++;
            bit_info.binary_representation[string_back_iterator] = '1';
        }
        string_back_iterator--;
    }

    bit_info.binary_representation[i] = '\0';

    return bit_info;
}
