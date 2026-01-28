#include <stdio.h>
int main() { 
int total_seconds, hours, minutes, seconds, remaining;

    printf("Enter total seconds: ");
scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
remaining = total_seconds % 3600;
    minutes = remaining / 60;
seconds = remaining % 60;
  
    printf("Time = %d Hours %d Minutes %d Seconds\n",hours, minutes, seconds);
return 0;
}
 
