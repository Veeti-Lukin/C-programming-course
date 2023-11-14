#include "stdio.h"
#include "stdlib.h"

/* Takes 2 command line arguments int a and int b
 * Prints the ascii table from a to b */
int main(int argc, char* argv[]) {
    int a;
    int b;

    if(argc != 3) {
        printf("Usage: %s <a> <b>\n", argv[0]);
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    for (;a <= b; a++) {
        printf("%d: %c\n", a,a);
    }

    return 0;
}
