#include "stdio.h"
/*
 * This program takes four integer command line arguments a,b,c,d
 * And prints the multiplication table from where x is a to b and y c to d
 */



int calcucateNumberLen(int number){
    int len = 0;
    while (1) {
        len++ ;
        if (number / 10 == 0) {
            break;
        }
        number = number / 10;
    }

    return len;
}

int main(int argc, char* argv[]){
    int a, b, c, d;
    int i;
    int biggest_num;
    int print_len;

    if(argc != 5) {
        printf("Usage: %s <a> <b> <c> <d>\n", argv[0]);
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    d = atoi(argv[4]);

    biggest_num = b * d;
    print_len = calcucateNumberLen(biggest_num)+ 1;

    /* print the column headers*/
    printf("%*c", print_len, ' ');
    for (i = a; i <= b; i++) {
        printf("%*d", print_len ,i);
    }
    printf("\n");

    /* print the rows */
    for(; c <= d; c++) {
        printf("%*d", print_len, c);
        for (i = a; i <= b; i++) {
            printf("%*d", print_len, i*c);
        }
        printf("\n");
    }

    /*printf("\n");*/
    return 0;
}
