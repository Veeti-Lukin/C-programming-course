#include "muunto.h"

#include <ctype.h>

void reverseString(char string[], unsigned int len) {
    unsigned int front_iterator = 0;
    unsigned int back_iterator = len-1;
    while (front_iterator < back_iterator) {
        char buffer = string[front_iterator];
        string[front_iterator] = string[back_iterator];
        string[back_iterator] = buffer;

        front_iterator++;
        back_iterator--;
    }
}

void muunna(char* string) {
    int i = 0;
    unsigned int len = 0;
    while (1) {
        if (string[i] == '\0') break;

        if(isupper(string[i])) string[i] = tolower(string[i]);
        else if(islower(string[i])) string[i] = toupper(string[i]);
        i++;
        len++;
    }

    reverseString(string, len);
}

