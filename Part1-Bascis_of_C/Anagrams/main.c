#include <stdio.h>

#include "anagrammit.h"

int main(int argc, char** argv) {
    unsigned int i = 2;

    if ((argc - 1) % 2 != 0) {
        printf("uneven amount of arguments");
    }

    for (; i < argc; i += 2) {
        int are_anagrams = anagrammeja(argv[i - 1], argv[i]);
        printf("\"%s\" ja \"%s\" %s anagrams\n", argv[i - 1], argv[i], are_anagrams ? "are" : "are not");
    }

    return 0;
}
