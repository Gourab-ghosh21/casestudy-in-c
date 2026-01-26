#include <stdio.h>
#include <stdbool.h>
int main() {
    int currentWeight, maxLimit, trips;
bool fireAlarm, batteryMode;
  printf("Enter weight, limit, trips, fireAlarm, batteryMode: ");
  scanf("%d %d %d %d %d", &currentWeight, &maxLimit,&trips, &fireAlarm, &batteryMode);


    if (currentWeight > maxLimit)
        printf("O\n");
else if (fireAlarm)
        printf("E\n");
else if (batteryMode && currentWeight > maxLimit / 2)
        printf("N\n");
 else if (trips > 5000)
        printf("S\n");
else
        printf("M\n");
