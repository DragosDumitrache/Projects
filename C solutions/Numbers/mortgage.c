#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
  printf("%s\n", "What's the total amount you need to pay back?");
  long loan;
  scanf("%d", &loan);

  printf("%s\n", "And what's the annual interest rate for your loan? The integer value please");
  float interest;
  scanf("%f", &interest);
  interest /= 100;
  float monthlyInterest = interest / 12;
  printf("%s\n", "Lastly, how many terms is the loan for?");
  scanf("%d", &terms);

  float monthlyPayment = loan * (monthlyInterest * pow((1 + monthlyInterest), terms)) / (pow((1 + monthlyInterest), terms) - 1);

  float interestAmount = interest * terms * loan;

  printf("The total interest amount is %.3f\n", interestAmount);
  printf("The monthly payment for your loan is %.3f\n", monthlyPayment);
  return 0;
}
