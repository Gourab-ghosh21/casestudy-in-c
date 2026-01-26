#include <stdio.h>
#include <stdbool.h>
int main() {
    int currentWeight, maxLimit, trips;
bool fireAlarm, batteryMode;
  printf("Enter weight, limit, trips, fireAlarm, batteryMode: ");
  scanf("%d %d %d %d %d", &currentWeight, &maxLimit,&trips, &fireAlarm, &batteryMode);


    if (currentWeight > maxLimit)
        printf("O\n");
