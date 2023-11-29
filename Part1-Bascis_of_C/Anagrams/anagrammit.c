#include "anagrammit.h"

#include <limits.h>

int anagrammeja(char* string1, char* string2) {
    unsigned char char_table[UCHAR_MAX + 1] = {0};
    unsigned int i = 0;

    while (1) {
        if (string1[i] == '\0') break;

        char_table[(unsigned char) string1[i]] += 1;
        char_table[(unsigned char) string2[i]] -= 1;

        i++;
    }

    if (string2[i] != '\0') {
        return 0;
    }

    for(i = 0; i <= UCHAR_MAX; i++){
        if(char_table[i] != 0) return 0;
    }

    return 1;
}

