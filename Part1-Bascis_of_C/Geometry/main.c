#include <stdio.h>
#include <stdlib.h>

#include "geometria.h"

double calculateCirclePerimeter(double radius) {
    return 2 * PII * radius;
}


int main(int argc, char* argv[]) {
    int i;

    printf("Piin arvo: %.19Lf\n", PII);

    for(i = 1; i < argc; i++) {
        double radius = atof(argv[i]);

        printf("Säteen %.6f omaavan ympyrän ala ja pallon tilavuus: %.10f ja %.10f\n", radius, ympyranAla(radius),
               pallonTilavuus(radius));
        printf("Säteen %.6f omaavan ympyrän piiri on %.10f\n", radius, calculateCirclePerimeter(radius));
    }

    return 0;
}
