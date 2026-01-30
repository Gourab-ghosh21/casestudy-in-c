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
   else if (accidents > 2)
premium *= 1.50;
  if (age < 25)
 premium += 2000;
 if (airbags && abs)
premium -= 1000;
 printf("Premium = %.2lf\n", premium);
return 0;
