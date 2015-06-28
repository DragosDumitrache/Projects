#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <strings.h>

void factorize(int n) {
  int d = 2;
  int i;
  int fm = 0;

  printf("%d's prime factors are: ", n);
  while (n > 1) {
    if (n % d == 0) {
      n /= d;
      fm++;
    } else {
      if (fm != 0) {
        printf("%d ", d);
      }
      fm = 0;
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
