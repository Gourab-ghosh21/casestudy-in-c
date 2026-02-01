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
{
printf("0\n");
}
else if (walletBalance < amount * currentPrice)
{
printf("0\n");
}
else if (volatility > 8 && !isWhale)
 printf("0\n");
  else if (currentPrice < targetPrice)
   printf("1\n");
