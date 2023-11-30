/**
 * This program takes a twos complement binary number as an argument and prints out what
 * it is in base 10 number format
 *
 * program assumes that the commandline argument includes only 1s and 0s
 */

#include <stdio.h>
#include <math.h>

unsigned int calculateStringLem(const char string[]) {
    unsigned int len = 0;

    while (string[len] != '\0') {
        len++;
    }

    return len;
}

long int binaryStringToNum(const char string[]) {
    long int     number        = 0;
    int          bacK_iterator = calculateStringLem(string) - 1;
    unsigned int exponent      = 0;

    for (; bacK_iterator >= 0; bacK_iterator--) {
        unsigned char bit;
        if (string[bacK_iterator] == '0') bit = 0;
        else bit = 1;

        if (bacK_iterator == 0 && bit == 1) {
            number -= bit * pow(2, exponent);
            break;
        }

        number += bit * pow(2, exponent);

        exponent++;
    }

    return number;
}


int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <binary number>", argv[0]);
        return 1;
    }

    printf("%ld\n", binaryStringToNum(argv[1]));

    return 0;
}
