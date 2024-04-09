#include <stdio.h>

int main() {
    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float grossSalary;

   
    printf("Enter base salary: ");
    scanf("%f", &baseSalary);
    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercentage);
    printf("Enter DA percentage: ");
    scanf("%f", &daPercentage);
    printf("Enter TA percentage: ");
    scanf("%f", &taPercentage);


    grossSalary = baseSalary + (baseSalary * hraPercentage / 100) + (baseSalary * daPercentage / 100) + (baseSalary * taPercentage / 100);


    printf("Gross salary: %.2f\n", grossSalary);

    return 0;
}

