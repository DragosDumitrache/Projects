#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void greedyCoinReturn(double change) {
  double coins[8] = {0.01, 0.05, 0.1, 0.2, 0.5, 1, 2};

  int i;
  printf("The change of £%.2lf will be paid as follows:\n", change);
  for (i = 6; i >= 0; i--) {
    int remainderCoins = change / coins[i] + 1e-9;
    if (remainderCoins > 0) {
      printf("%d coins of £%.2lf\n", remainderCoins, coins[i]);
      change -= remainderCoins * coins[i];
    }
  }
  printf("\n");
  return;
}

// TODO: Look into DP approach;

int main(int argc, char* argv[]) {
  if (argc < 3) {
    printf("%s\n", "You must input the cost and the amount of money paid");
    return -1;
  }

  double cost = atof(argv[1]);
  double cashPaid = atof(argv[2]);

  double change = cashPaid - cost;

  if (change < 0) {
    printf("The total cost is £%.2lf, you have only paid £%.2lf.\nYou need to pay at least £%.2lf more\n",
            cost, cashPaid, fabsf(change));
   } else if (change == 0) {
      printf("There's nothing left to be paid\n");
  } else {
    greedyCoinReturn(change);
  }

  return 0;
}
