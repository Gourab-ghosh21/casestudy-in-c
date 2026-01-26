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
 return 0;
}
Output

S
10. Crypto Trade Execution
#include <stdio.h>
#include <stdbool.h>

int main() {
    double currentPrice, targetPrice, walletBalance;
    int amount, volatility, hour;
    bool isWhale;

    printf("Enter currentPrice, targetPrice, balance, amount, volatility, hour, whale: ");
    scanf("%lf %lf %lf %d %d %d %d", &currentPrice, &targetPrice,
          &walletBalance, &amount, &volatility, &hour, &isWhale);

    if (hour >= 0 && hour <= 4)
        printf("0\n");
    else if (walletBalance < amount * currentPrice)
        printf("0\n");
    else if (volatility > 8 && !isWhale)
        printf("0\n");
    else if (currentPrice < targetPrice)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
Output
