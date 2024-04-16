#include <stdio.h>

int main() {
    int Num;
    int FirstDigit; 
    int LastDigit;
    int Sum;

    
    printf("Enter a number: ");
    scanf("%d", &Num);
    
    FirstDigit = Num;
    while (FirstDigit >= 10) {
        LastDigit /= 10;
    }

    
    LastDigit = Num % 10;


    Sum = FirstDigit + LastDigit;


    printf("Sum of first and last digit of %d is: %d\n", Num, Sum);

    return 0;
}
