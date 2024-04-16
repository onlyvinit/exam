#include <stdio.h>

int main() {
    char alphabet = 'a';
    int SkipaleAlphabet = 3;

    do {
        printf("%c ", alphabet);
        alphabet += SkipaleAlphabet + 1;
    } while (alphabet <= 'z');

    return 0;
}
