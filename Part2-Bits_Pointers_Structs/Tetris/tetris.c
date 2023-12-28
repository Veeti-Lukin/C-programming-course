
#include "tetris.h"

/* PRIVATE DECLARATIONS START */

int isRowFull(const char row[COLUMN_AMOUNT]);

void emptyRow(char row[COLUMN_AMOUNT]);

void rowCopy(char to_row[COLUMN_AMOUNT], const char from_row[COLUMN_AMOUNT]);

/* PRIVATE DECLARATIONS END */


void paivita(char play_area[ROW_AMOUNT][COLUMN_AMOUNT]) {
    int i          = ROW_AMOUNT - 1;
    int row_offset = 0;

    for (; i >= 0; i--) {
        if (isRowFull(play_area[i])) {
            char zero_row[COLUMN_AMOUNT] = {0};

            rowCopy(play_area[i], zero_row);
            row_offset++;
        }

        if (row_offset > 0 && !isRowFull(play_area[i])) {
            rowCopy(play_area[i + row_offset], play_area[i]);
        }
    }

    for (i = 0; i < row_offset; i++) {
        emptyRow(play_area[i]);
    }
}


/* ############## PRIVATE DEFINITIONS ############## */
int isRowFull(const char row[COLUMN_AMOUNT]) {
    int i = 0;

    for (; i < COLUMN_AMOUNT; i++) {
        if (row[i] == EMPTY_SQUARE) return 0;
    }

    return 1;
}

void emptyRow(char row[COLUMN_AMOUNT]) {
    int i = 0;

    for (; i < COLUMN_AMOUNT; i++) {
        row[i] = EMPTY_SQUARE;
    }
}

void rowCopy(char to_row[COLUMN_AMOUNT], const char from_row[COLUMN_AMOUNT]) {
    int i = 0;

    for (; i < COLUMN_AMOUNT; i++) {
        to_row[i] = from_row[i];
    }
}
