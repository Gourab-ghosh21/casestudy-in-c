#include <stdio.h>

int main() 
{
    float raw_balance, temp, final_balance;
    int integer_part;
 printf("Enter raw balance: ");
    scanf("%f", &raw_balance);
temp = raw_balance * 100;
    integer_part = (int) temp;
 final_balance = integer_part / 100.0;
