/**
 * This program takes a 32 bit binary IEE 754 floating point number argument and prints
 * out the base 10 number representation of it
 */
#include <stdio.h>
#include <math.h>

#define FIXING_TERM_32BIT 127
#define SIGN_INDEX 0
#define EXPONENT_LEFT_INDEX 1 /* 0 is already sign */
#define EXPONENT_RIGHT_INDEX 8
#define MANTISSA_LEFT_INDEX 9
#define MANTISSA_RIGHT_INDEX 31

#define PRINT_PRECISION 15

/*
 * This function assumes right to left bit order
 */
long int binaryStringToNum(const char* left, const char* right) {
    long int     number   = 0;
    unsigned int exponent = 0;

    for (; right >= left; right--) {
        unsigned char bit;
        if (*right == '0') bit = 0;
        else bit = 1;

        number += bit * pow(2, exponent);

        exponent++;
    }

    return number;
}

/*
 * This function assumes left to right bit order
 */
double calculateMantissa(const char* left, const char* right) {
    unsigned int i            = 0;
    double       decimal_part = 0;

    for (; left <= right; left++) {
        unsigned char bit;
        if (*left == '0') bit = 0;
        else bit = 1;

        decimal_part += 1 / pow(2, i + 1) * bit;

        i++;
    }

    return decimal_part + 1.0;
}

double binaryStringToFloat(const char string[]) {
    int    sign     = (string[SIGN_INDEX] == '1') ? 1 : -1;
    int    exponent = binaryStringToNum(&string[EXPONENT_LEFT_INDEX],
                                        &string[EXPONENT_RIGHT_INDEX]) -
                      FIXING_TERM_32BIT;
    double mantissa = calculateMantissa(&string[MANTISSA_LEFT_INDEX],
                                        &string[MANTISSA_RIGHT_INDEX]);
    return mantissa * pow(2.0, exponent) * (-sign);
}


int main(int argc, char** argv) {
    unsigned int sign     = (argv[1][SIGN_INDEX] == '1') ? 1 : 0;
    int          exponent = binaryStringToNum(&argv[1][EXPONENT_LEFT_INDEX],
                                              &argv[1][EXPONENT_RIGHT_INDEX]) -
                            FIXING_TERM_32BIT;
    double       mantissa = calculateMantissa(&argv[1][MANTISSA_LEFT_INDEX],
                                              &argv[1][MANTISSA_RIGHT_INDEX]);

    printf("%.*f\n", PRINT_PRECISION, mantissa);
    printf("%d\n", exponent);
    if (sign) printf("-\n");
    else printf("+\n");
    printf("%.*f\n", PRINT_PRECISION, binaryStringToFloat(argv[1]));

    return 0;
}
