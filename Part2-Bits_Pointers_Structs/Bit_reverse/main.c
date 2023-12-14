#include <stdio.h>

#include "bitit.h"

int main(void) {
    long int    decimal       = 2015L;
    signed char decimal_schar = decimal;
    short       decimal_short = decimal;
    int         decimal_int   = decimal;

    scharBitit2(decimal_schar);
    kaannaScharBitit(&decimal_schar);
    scharBitit2(decimal_schar);

    shortBitit2(decimal_short);
    kaannaShortBitit(&decimal_short);
    shortBitit2(decimal_short);

    intBitit2(decimal_int);
    kaannaIntBitit(&decimal_int);
    intBitit2(decimal_int);

    longBitit2(decimal);
    kaannaLongBitit(&decimal);
    longBitit2(decimal);
    return 0;
}
