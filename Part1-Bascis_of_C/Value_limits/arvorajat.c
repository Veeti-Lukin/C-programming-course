#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    unsigned int i;

    for (i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        char delimeter = ':';
        printf("%d", num);

        if (num <= CHAR_MAX && num >= CHAR_MIN) {
            printf("%c signed char", delimeter);
            delimeter = ',';
        }

        if (num <= UCHAR_MAX && num >= 0) {
            printf("%c unsigned char", delimeter);
            delimeter = ',';
        }

        if (num <= SHRT_MAX && num >= SHRT_MIN) {
            printf("%c short int", delimeter);
            delimeter = ',';
        }

        if (num <= USHRT_MAX && num >= 0) {
            printf("%c unsigned short int", delimeter);
            delimeter = ',';
        }

        printf("%c int", delimeter);
        printf("\n");
    }

    return 0;
}
