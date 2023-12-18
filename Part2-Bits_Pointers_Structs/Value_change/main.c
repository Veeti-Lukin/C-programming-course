#include <stdio.h>
#include <stdlib.h>
#include "vaihto.h"


int main(int argc, char** argv) {
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);
    printf("%d %d %d\n", x, y, z);
    vaihda(&x, &y);
    printf("%d %d %d\n", x, y, z);
    jarjesta(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);
    return 0;
}
