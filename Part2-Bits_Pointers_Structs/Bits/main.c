/**
 * This program converts decimal numbers to binary format.
 * Prints the binary format of the numbers on the screen as well as other binary
 * representation information of the number.
 *
 * The library "bitit" handles the conversion and the printing
 */

#include "bitit.h"
#include "stdio.h"

int main(void) {
    scharBitit2(2015);
    printf("\n");
    shortBitit2(2015);
    printf("\n");
    intBitit2(2015);
    printf("\n");
    longBitit2(2015);
    printf("\n");
}
