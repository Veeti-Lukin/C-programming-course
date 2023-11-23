#include <stdio.h>
#include <ctype.h>

/*
 * For every command line arguments prints if it is a palindrome or not
 */

unsigned int calculateStringLen(char string[]) {
    unsigned int len = 0;

    while (string[len] != '\0') {
        len++;
    }
    return len;
}

char isPalindrome(char string[]) {
    int i = 0;
    int j = calculateStringLen(string)-1;

    while (1) {
        if (j < i) break;

        if(tolower(string[i]) != tolower(string[j])) return 0;

        i++;
        j--;
    }

    return 1;
}

int main (int argc, char* argv[]) {
    int i;

    for (i = 1; i < argc; i++) {
        printf("\"%s\": ", argv[i]);
        if(isPalindrome(argv[i])) {
            printf("on palindromi\n");
        } else {
            printf("ei ole palindromi\n");
        }
    }

    return 0;
}
