#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*
 * Prints the square root of the given command line arguments
 * in the precision of the first given argument
 */
int main(int argc, char* argv[]){
    int i;
    int precision;

    if(argc < 2) {
        printf("Usage: %s [precision] [...]\n", argv[0]);
        return 1;
    }

    precision = atoi(argv[1]);

    for (i = 2; i  < argc; i++) {
        double argument = atof(argv[i]);
        double square_root = sqrt(argument);

        printf("sqrt(%.*f) = %.*f\n", precision, argument, precision, square_root);
    }

    return 0;
}
