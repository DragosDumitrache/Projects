// Run the program giving the number of PI's digits you want to display 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 48

int main(int argc, char* argv[]){
  
  if (argc < 2) {
    printf("%s\n", "You must input a valid number");
    return -1;
  } 

  int size = atoi(argv[1]);
  if (size < 1) {
    printf("Input a valid number between 1 and %d", MAX);
    return -1;
  } else if (size > MAX) {
    size = MAX;
  }

  double pi = 0.0;
  double decimal = 0.0;

  int i;

  for(i = 0; i < size; i++) {
    decimal = pow(16, -i) * (4.0 / (8 * i + 1) - 2.0 / (8 * i + 4) 
                            - 1.0 / (8 * i + 5) - 1.0 / (8 * i + 6));
    pi += decimal;
  }

  printf("π with %d decimals is: %.*f\n", size, size, pi);


  return 0;
}