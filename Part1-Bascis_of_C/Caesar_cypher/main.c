#include <stdio.h>
#include "caesar.h"

int main(int argc, char* argv[]) {
    char string[] = "OHJELMOINNIN TEKNIIKKA";
    char original_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char replace_alphabet[] = "OIUGENYMSWXVALPKHBQCZDFJRT";

    caesarKoodaa(string, original_alphabet, replace_alphabet);

    printf("%s\n", string);

    return 0;
}
