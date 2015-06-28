#include <stdlib.h>
#include <stdio.h>

int get_next_prime(int current_prime) {
  int next_prime = current_prime + 1;
  while(!is_prime(next_prime)) {
    next_prime += 1;
  }
  return next_prime;
}

int is_prime(int n) {
  int i;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) {
  unsigned int current_prime = 2;

  char user_input = 'Y';

  while (user_input != 'N' && user_input != 'n') {
    printf("Show the next prime? (Y/N): ");
    scanf(" %c", &user_input);
    // if (user_input == 'Y' || user_input == 'y') {
      printf("%s%d\n\n", "The next prime number is ", current_prime);
      current_prime = get_next_prime(current_prime);
    // }
  }
  printf("Bye :) \n");

  return 0;
}
