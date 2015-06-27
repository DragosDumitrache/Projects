#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Naive iterative approach storing values, working toward memoization
// Also looking into faster algorithms
#define MAX 46
int* getNFib(int *fib, int *size, int n){
  int i;
  for (i = *size - 2; i < n; i++) {
    fib[(*size)++] = fib[i] + fib[i + 1];
  }
  return fib;
}

int main(int argc, char *argv[]){

  int *fib_list = malloc(2000000);
  fib_list[0] = 0;
  fib_list[1] = 1;
  int size = 2;

  if (argc < 2) {
    printf("Error\n Usage: ./fib n");
    return -1;
  }
  int n = atoi(argv[1]);
  if (n > MAX) {
    printf("Error\nInput a value between 0 and 46 inclusive\n");
    return -1;
  }
  if ((fib_list + n) != NULL && n < size) {
    printf("The term you were looking for is: %d\n", *(fib_list + n));
    return 0;
  } else {
    getNFib(fib_list, &size, n);
  }
  printf("The term you were looking for is: %d\n", *(fib_list + n));
  return 0;
}
