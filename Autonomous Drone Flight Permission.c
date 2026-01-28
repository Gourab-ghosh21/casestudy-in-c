#include <stdio.h>
#include<stdbool.h>
int main()
{ int weather;
int battery;
float cargoweight;
bool isNoFlyZone, adminOverride;
printf("Enter weather, battery, cargoWeight, noFlyZone, adminOverride: ");
    scanf("%d %d %f %d %d", &weather, &battery, &cargoWeight,
          &isNoFlyZone, &adminOverride);
 if (isNoFlyZone) {
        printf("0\n");
 } else if (adminOverride) {
        printf("1\n");
} else if (weather == 3) {
        printf("0\n");
 } else if (weather == 2 && (battery <= 80 || cargoWeight >= 2.0)) {
        printf("0\n");
