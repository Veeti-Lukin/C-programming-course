#include "unsigned.h"

#include <stdio.h>

void ucharIntervalli(unsigned char sade, unsigned char askel) {
    unsigned char current_val    = -sade;
    unsigned int  is_on_negative = 1;

    printf("unsigned char:");

    while (1) {
        printf(" %u", current_val);
        if (!is_on_negative && current_val >= sade) {
            break;
        } else if ((unsigned char) (current_val + askel) < current_val) {
            is_on_negative = 0;
        }
        current_val += askel;
    }
    printf("\n");
}

void ushortIntervalli(unsigned short sade, unsigned short askel) {
    unsigned short current_val    = -sade;
    unsigned int   is_on_negative = 1;

    printf("unsigned short:");

    while (1) {
        printf(" %u", current_val);
        if (!is_on_negative && current_val >= sade) {
            break;
        } else if ((unsigned short) (current_val + askel) < current_val) {
            is_on_negative = 0;
        }
        current_val += askel;
    }
    printf("\n");
}

void uintIntervalli(unsigned int sade, unsigned int askel) {
    unsigned int current_val    = -sade;
    unsigned int is_on_negative = 1;

    printf("unsigned int:");

    while (1) {
        printf(" %u", current_val);
        if (!is_on_negative && current_val >= sade) {
            break;
        } else if ((unsigned int) (current_val + askel) < current_val) {
            is_on_negative = 0;
        }
        current_val += askel;
    }
    printf("\n");
}

void ulongIntervalli(unsigned long sade, unsigned long askel) {
    unsigned long current_val    = -sade;
    unsigned int  is_on_negative = 1;

    printf("unsigned long:");

    while (1) {
        printf(" %lu", current_val);
        if (!is_on_negative && current_val >= sade) {
            break;
        } else if ((unsigned long) (current_val + askel) < current_val) {
            is_on_negative = 0;
        }
        current_val += askel;
    }
    printf("\n");

}
