#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Input the number: ");
  int n;
  scanf("%d", &n);
  int steps = 0;
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    steps++;
  }
  printf("The conjecture is %d\n", steps);
  return 0;
}
