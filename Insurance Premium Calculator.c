#include <stdio.h>
#include <stdbool.h>
int main()
{ double carValue, premium;
  int accidents, age;
 bool airbags, abs;
   printf("Enter carValue, accidents, age, airbags, abs: ");
 scanf("%lf %d %d %d %d", &carValue, &accidents, &age, &airbags, &abs);
 premium = carValue * 0.05;
if (accidents == 0)
premium *= 0.80;
