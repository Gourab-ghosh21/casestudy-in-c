#include <stdio.h>

int main() {
int total_seconds, hours, minutes, seconds, remaining;

    printf("Enter total seconds: ");
scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
remaining = total_seconds % 3600;
    minutes = remaining / 60;
