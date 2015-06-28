#include <stdlib.h>
#include <stdio.h>

void factorize(int n) {
  int d = 2;
  int i;

  // Counts how many times the number is divided by the current prime factor
  int quotient = 0;

  printf("%d's prime factors are: ", n);
  while (n > 1) {
    if (n % d == 0) {
      n /= d;
      quotient++;
    } else {
      if (quotient != 0) {
        printf("%d ", d);
      }
      quotient = 0;
      d++;
    }
  }
  printf("%d\n", d);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: ./factorize N\nPlease input a value to factorize!\n");
    return -1;
  }

  int n = atoi(argv[1]);

  if (n < 2) {
    printf("You must input a value higher than 2\n");
    return -1;
  }
  factorize(n);
  return 0;
}
