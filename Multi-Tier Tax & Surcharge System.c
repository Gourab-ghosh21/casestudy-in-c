#include <stdio.h>

int main() {
    int age;
    double income, tax = 0;

    printf("Enter age and income: ");
    scanf("%d %lf", &age, &income);

    if (age < 18) {
        tax = 0;
    } else {
        if (income <= 500000)
            tax = income * 0.05;
        else if (income <= 1000000)
            tax = income * 0.15;
        else
            tax = income * 0.30;

        if (income > 2000000)
            tax += tax * 0.05;

        if (age > 60)
            tax -= 2000;
    }

    if (tax < 0) tax = 0;
    printf("Tax = %.2lf\n", tax);
    return 0;
}
