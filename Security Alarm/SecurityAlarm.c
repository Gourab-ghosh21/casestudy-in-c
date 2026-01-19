#include <stdio.h>
int main() 
{  int start_hour, delay_hours, raw_sum, final_hour;

    printf("Enter start hour (0-23): ");
scanf("%d", &start_hour);
 printf("Enter delay hours: ");
    scanf("%d", &delay_hours);
    raw_sum = start_hour + delay_hours;
    final_hour = raw_sum % 24;
    printf("Alarm will ring at hour: %d\n", final_hour);

    return 0;
}
