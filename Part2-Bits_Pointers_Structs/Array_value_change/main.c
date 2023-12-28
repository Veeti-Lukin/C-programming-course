#include <stdio.h>
#include <math.h>
#include "muunna.h"

double triple(double x) {
    return 3 * x;
}

int main(void) {
    int    i      = 0;
    double dt[10] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    muunnaTaulu(10, dt, triple);
    for (i = 0; i < 10; ++i) {
        printf(" %.1f", dt[i]);
    }
    printf("\n");
    muunnaTaulu(10, dt, sqrt);
    for (i = 0; i < 10; ++i) {
        printf(" %.2f", dt[i]);
    }
    printf("\n");
    return 0;
}
