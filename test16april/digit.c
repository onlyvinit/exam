#include <stdio.h>

int main() {
    int number;
    int count = 0;


    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        number = number /10;
        ++count;
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}
