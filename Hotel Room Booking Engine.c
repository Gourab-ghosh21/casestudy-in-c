#include <stdio.h>

int main()
{
    int type, guests, age, day;
    float price;
printf("Enter type, guests, age, day: ");
    scanf("%d %d %d %d", &type, &guests, &age, &day);
 price = (type == 1) ? 1000 : 1800;
