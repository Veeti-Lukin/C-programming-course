#include <stdio.h>
#include "kuukaudet.h"

int main(void) {
    printf("Helmikuu 2016: %d päivää\n", kkPituus("Helmikuu", 2016));
    printf("Helmikuu 2100: %d päivää\n", kkPituus("helmikuu", 2100));
    printf("Helmi kuu 2100: %d päivää\n", kkPituus("helmi kuu", 2100));

    return 0;
}
