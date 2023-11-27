/**
 * This program reverses all the commandline parameters and change all lowercase characters to uppercase and vice versa
 * Afterwards prints them on the screen
 */
#include <stdio.h>
#include "muunto.h"

int main(int argc, char* argv[]) {
    int i = 1;

    for(; i < argc; i++) {
        printf("%d: %s --> ", i, argv[i]);
        muunna(argv[i]);
        printf("%s\n", argv[i]);
    }

    return 0;
}
