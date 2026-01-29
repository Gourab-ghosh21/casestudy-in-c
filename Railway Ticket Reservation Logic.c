#include <stdio.h>
int main() 
{
   int coach, month;
char quota;
float price;
 printf("Enter coach, quota, month: ");
scanf("%d %c %d", &coach, &quota, &month);
  price = (coach == 1) ? 2000 : 500;
if (month == 5 || month == 12)
 price += price * 0.20;
