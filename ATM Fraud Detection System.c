#include <stdio.h>
#include <stdbool.h>
int main()
{
int pinAttempts, locationCode, homeCode;
 double amount, dailyTotal;
bool isHighTrustUser;
 printf("Enter pinAttempts, amount, dailyTotal, trust, location, home: ");
scanf("%d %lf %lf %d %d %d", &pinAttempts, &amount,
