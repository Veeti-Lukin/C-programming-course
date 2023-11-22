#include "stdio.h"
#include "stdlib.h"

#define K_ROW_NUMBER_AMOUNT 7

int main(int argc, char* argv[]){
    int played_row[K_ROW_NUMBER_AMOUNT];
    int winning_row[K_ROW_NUMBER_AMOUNT];
    int right_numbers[K_ROW_NUMBER_AMOUNT];
    int right_number_amount = 0;
    int i;
    int j;

    if(argc != 15) {
        printf("Usage: %s <%d numbers>\n", argv[0], K_ROW_NUMBER_AMOUNT*2);
        printf("First %d numbers are the winning numbers and the latter %d are the played numbers",
               K_ROW_NUMBER_AMOUNT, K_ROW_NUMBER_AMOUNT);
        return 1;
    }

    printf("Voittorivi:");
    for (i = 1; i < K_ROW_NUMBER_AMOUNT + 1; i++){
        int number =  atoi(argv[i]);
        winning_row[i-1] = number;

        printf(" %d", number);
    }
    printf("\nLottorivi:");
    for (i = K_ROW_NUMBER_AMOUNT+1; i < (K_ROW_NUMBER_AMOUNT * 2) + 1 ; i++){
        int number =  atoi(argv[i]);
        played_row[i - 1 - K_ROW_NUMBER_AMOUNT] = number;

        printf(" %d", number);
    }

    for (i = 0; i < K_ROW_NUMBER_AMOUNT; i++) {
        for (j = 0; j < K_ROW_NUMBER_AMOUNT; j++){
            if (played_row[i] == winning_row[j]) {
                right_numbers[right_number_amount] = played_row[i];
                right_number_amount++;
            }
        }
    }

    if (right_number_amount == 0){
        printf("\n");
        printf("Ei yhtään oikein!\n");
        return 0;
    }

    printf("\n");
    printf("%d oikein:", right_number_amount);
    for (i = 0; i < right_number_amount; i++){
        printf(" %d", right_numbers[i]);
    }

    printf("\n");
    return 0;
}
