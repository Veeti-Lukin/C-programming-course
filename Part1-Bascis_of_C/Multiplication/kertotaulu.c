
#include "stdio.h"

const int K_MAX_NUM = 15;
const int K_ELEMENT_LEN = 4;

int main(void) {
    int row = 1;
    int column = 1;
    /* print the header row */
    printf("%*c", K_ELEMENT_LEN, 'x');
    for (; column <= K_MAX_NUM; column++) {
        printf("%*d", K_ELEMENT_LEN, column);
    }
    printf("\n");

    for (; row <= K_MAX_NUM; row++) {
        column = 1;
        printf("%*d", K_ELEMENT_LEN, row);
        for (; column <= K_MAX_NUM; column++) {
            printf("%*d", K_ELEMENT_LEN, column * row);
        }
        printf("\n");
    }

    return 0;
}
