#include "stdio.h"
#include "stdlib.h"

int main(int argc, char* argv[]) {
    int a;
    int b;
    int i = 3;
    int divisor;
    char dividable = 1;
    char first_print = 1;

    if(argc < 3) {
        printf("Usage:%s <a> <b> [luku1] [luku2] [...]\n", argv[0]);
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    for (;a <= b; a++) {
        i = 3;
        dividable = 0;
        for(;i < argc; i++ ) {
            divisor = atoi(argv[i]);
            if(a % divisor == 0) {
                dividable = 1;
                break;
            }
        }

        if(!dividable) {
            if(first_print) {
                printf("%d", a);
                first_print = 0;
            } else{
                printf(" %d", a);
            }
        }
    }

    if(!first_print) {
        printf("\n");
    }
    return 0;

}
