/*
 * Prints all the numbers from K_START to K_END(inclusive) that are not divisible with
 * K_DIVIDER1, K_DIVIDER2 or K_DIVIDER3.
 */
#include "stdio.h"

int K_START = 1;
int K_END = 100;
int K_DIVIDER1 = 2;
int K_DIVIDER2 = 3;
int K_DIVIDER3 = 5;

int main() {
    int i = K_START;
    int number_is_printed = 0;

    for(; i <= K_END; i++) {
        if(i % K_DIVIDER1 == 0) continue;
        if(i % K_DIVIDER2 == 0) continue;
        if(i % K_DIVIDER3 == 0) continue;

        if(number_is_printed) {
            printf(" ");
        }
        printf("%d", i);
        number_is_printed = 1;
    }

    printf("\n");
    return 0;
}
