#include "stdio.h"

#define bool char
#define true 1
#define false 0

unsigned int calculateStringLen(const char* string) {
    unsigned int len = 0;

    while (1) {
        if (string[len] == '\0') break;
        len++;
    }

    return len;
}

unsigned int calculateNumberLen(int num) {
    unsigned int len = 0;

    while (1) {
        len++;
        if(num / 10 == 0) {
            break;
        }
        num = num / 10;
    }

    return len;
}

void printNTimes(char c, unsigned int n, bool new_line){
    for (; n != 0; n-- ) {
        printf("%c", c);
    }

    if(new_line) printf("\n");
}

int main(int argc, char* argv[]) {
    int i;
    unsigned int longest_num_len = 0;
    unsigned int longest_arg_len = 0;
    unsigned int row_len = 0;

    /* Find how log is the longest arg*/
    for (i = 1; i < argc; i++) {
        unsigned int current_arg_len;
        current_arg_len = calculateStringLen(argv[i]);

        if (current_arg_len > longest_arg_len) {
            longest_arg_len = current_arg_len;
        }
    }

    longest_num_len = calculateNumberLen(argc);

    /* calculate row len
                  12  123          12
     example row: #  8 | Bangladesh #
     */
    row_len = 2 + longest_num_len + 3 + longest_arg_len + 2;

    /* print top header */
    printNTimes('#', row_len, true);
    /*print rows*/
    for (i = 1; i < argc; i++) {
        printf("# %*d | %-*s #",longest_num_len, i, longest_arg_len, argv[i]);
        printf("\n");

        if(i != argc-1) {
            printf("#");
            printNTimes('-', longest_num_len+2,false);
            printf("+");
            printNTimes('-', longest_arg_len+2, false);
            printf("#\n");
        }
    }
    /* print bottom header */
    printNTimes('#', row_len, true);

    return 0;
}
