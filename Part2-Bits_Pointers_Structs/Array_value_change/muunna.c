
#include "muunna.h"

void muunnaTaulu(unsigned int size, double* table, double (* mutator)(double)) {
    int i = 0;

    for (; i < size; i++) {
        table[i] = mutator(table[i]);
    }

}
