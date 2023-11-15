#include "stdio.h"

/* prints the command line arguments in this format:
 *  i: argument (length: x)
 */

unsigned int count_string_len(const char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }

    return i;
}

int main(int argc, char* argv[]) {
    unsigned int i = 1;

    for(; i <= argc-1; i++) {
        printf("%u: %s (pituus: %u)\n", i, argv[i], count_string_len(argv[i]));
    }

    return 0;
}
