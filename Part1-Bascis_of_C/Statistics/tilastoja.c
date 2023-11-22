#include "stdio.h"
#include "stdlib.h"

int main(int argc, char * argv[]) {
    double smallest = atof(argv[1]);
    double biggest = atof(argv[1]);

    int i;
    int j;

    char is_first_unique = 1;

    int max_occurrences = 1;
    int current_occurrences = 0;
    char is_first_most_frequent = 1;
    

    for (i=1; i < argc; i++) {
        double number = atof(argv[i]);
        if (number < smallest) {
            smallest = number;
        }
        if (number > biggest) {
            biggest = number;
        }
    }

    printf("Pienin: %f\n", smallest);
    printf("Suurin: %f", biggest);

    for (i = 1; i < argc; i++) {
        int is_unique = 1;

        for(j = 1; j < argc; j++) {
            if (j == i) continue;
            if(atof(argv[i]) == atof(argv[j])) is_unique = 0;
        }

        if (is_unique) {
            if (is_first_unique) {
                printf("\nAinutlaatuiset:");
                is_first_unique = 0;
            }
            printf(" %f", atof(argv[i]));
        }
    }


    for (i = 1; i < argc; i++) {
        double currentValue = atof(argv[i]);
        current_occurrences = 1;

        for (j = i + 1; j < argc; j++) {
           if(currentValue == atof(argv[j])) current_occurrences++;
        }

        if (current_occurrences > max_occurrences) {
            max_occurrences = current_occurrences;
        }
    }

    for (i = 1; i < argc; i++) {
        current_occurrences = 1;
        for (j = i + 1; j < argc; j++) {
            if (atof(argv[i]) == atof(argv[j])) current_occurrences ++;
        }

        if (current_occurrences == max_occurrences && current_occurrences != 1) {
            if (is_first_most_frequent) {
                printf("\nUseimmiten esiintyneet (%d kertaa):", max_occurrences);
                is_first_most_frequent = 0;
            }
            printf(" %f", atof(argv[i]));
        }
    }

    printf("\n");
    return 0;
}
