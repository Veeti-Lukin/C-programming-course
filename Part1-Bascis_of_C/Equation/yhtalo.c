#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define precision 3

double pow_of_2(double i) {
    return i * i;
}


int main (int argc, char* argv[]) {
    double  a, b, c;
    double discriminant;
    int amount_of_answers = 0;

    if(argc != 4) {
        printf("Usage: %s <a> <b> <c>\n", argv[0]);
        return 1;
    }

    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);

    discriminant = pow_of_2(b) - 4 * a * c;
    if (discriminant < 0) amount_of_answers = 0;
    else if (discriminant == 0) amount_of_answers = 1;
    else amount_of_answers = 2;

    switch (amount_of_answers) {
        case 0:
            printf("Ei ratkaisua");
            break;

        case 1: {
            double answer = -b / (2*a);
            printf("%.*f", precision, answer);
            break;
        }
        case 2: {
            double answer1 = (-b + sqrt(discriminant)) / (2 * a);
            double answer2 = (-b - sqrt(discriminant)) / (2 * a);

            if(answer2 < answer1) {
                double buffer;
                buffer = answer1;
                answer1 = answer2;
                answer2 = buffer;
            }
            printf("%.*f %.*f", precision, answer1, precision, answer2);
            break;
        }
    }

    printf("\n");
    return 0;
}

