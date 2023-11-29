#include "likimvrt.h"
#include "math.h"

static double tolerance = 0.000001;

double lueToleranssi(void) {
    return tolerance;
}

void asetaToleranssi(double new_tolerance) {
    tolerance = new_tolerance;
}

int doubleVrt(double a, double b) {
    double abs_diff = fabs(b - a);
    return abs_diff < tolerance;
}
