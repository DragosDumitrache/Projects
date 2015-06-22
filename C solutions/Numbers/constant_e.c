#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 34

int factorial(int n){
  if (n <= 1) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}
int main(int argc, char*argv[]){
  
  if (argc < 2) {
    printf("%s\n%s\n", "Usage: ./program_name number_of_digits", 
          "You must input a valid number");
    return -1;
  }

  int size = atoi(argv[1]);
  if (size < 1) {
    printf("Input a valid number between 1 and %d\n", MAX);
    return -1;
  } else if (size > MAX) {
    size = MAX;
  }

  double decimal = 0.0;
  double e = 0.0;

  int i;

  for(i = 0; i < size; i++) {
    decimal = 1.0 / factorial(i);
    e += decimal;
  } 
  printf("The mathematical constant e with %d decimals is %.*f\n", size, size, e);
  return 0;
}