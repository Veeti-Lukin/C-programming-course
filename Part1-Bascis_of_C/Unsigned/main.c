#include "unsigned.h"

int main(void) {
    unsigned long a = 900000000;
    unsigned long b = 300000000;
    a = a * 10;
    b = b * 10;
    ucharIntervalli(150, 50);
    ushortIntervalli(45000, 15000);
    uintIntervalli(3300000000, 1100000000);
    ulongIntervalli(a, b);
}
