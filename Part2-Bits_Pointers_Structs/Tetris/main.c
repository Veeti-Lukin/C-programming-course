#include <stdio.h>
#include "tetris.h"

char play_area[20][10] = {"          ",
                          "  x   x   ",
                          " xx   xxx ",
                          "xxx xxxxxx",
                          "xxxxxxxxxx",
                          "xxxxxxxxxx",
                          "xxxxxx xxx",
                          "xxxxxxx xx",
                          "x xxxxxxxx",
                          "xxx xxx xx",
                          "xxxxxx xxx",
                          "x xx xxx x",
                          "xxxxxxxxx ",
                          "xxx xxx xx",
                          "xxxxx xx x",
                          " xxxxxxxxx",
                          "xxx xxx xx",
                          "x xxxx xxx",
                          "xxxxx xxxx",
                          "xxxxxxxx x"};

int main(void) {
    int i = 0;
    paivita(play_area);

    for (i = 0; i < 20; ++i) {
        printf("%.10s\n", play_area[i]);
    }
    return 0;
}
