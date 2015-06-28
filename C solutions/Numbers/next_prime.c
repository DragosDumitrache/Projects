#include <stdlib.h>
#include <stdio.h>

int getNextPrime(int currentPrime) {
  int nextPrime = currentPrime + 1;
  while(!isPrime(nextPrime)) {
    nextPrime += 1;
  }
  return nextPrime;
}

int isPrime(int n) {
  int i;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) {
  unsigned int currentPrime = 2;
  char seeNames;
  char c = 'Y';

  while (c != 'N' && c != 'n') {
    printf("Show the next prime? (Y/N): ");
    scanf(" %c", &c);
    if (c == 'Y' || c == 'y') {
      printf("%s%d\n\n", "The next prime number is ", currentPrime);
      currentPrime = getNextPrime(currentPrime);
    }
  }
  printf("Bye :) \n");

  return 0;
}
