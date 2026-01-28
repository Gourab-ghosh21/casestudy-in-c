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
