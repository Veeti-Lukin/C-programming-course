#include "caesar.h"

#include <limits.h>

void caesarKoodaa(char string[], char original_alphabet[], char replace_alphabet[]) {
    unsigned char replacement_table[UCHAR_MAX + 1];
    unsigned int i;

    /* initialize replacement array characters so that the index is the character itself*/
    for (i = 0; i <= UCHAR_MAX; i++) {
        replacement_table[i] = (unsigned char)i;
    }

    /* update the replacement characters to replacement table*/
    for (i = 0; original_alphabet[i] != '\0' ; i++) {
        replacement_table[(unsigned char)original_alphabet[i]] = replace_alphabet[i];
    }

    /* iterate the string and replace the characters from the replacement table*/
    for (i = 0; string[i] != '\0'; i++) {
        string[i] = replacement_table[(unsigned char)string[i]];
    }

}
