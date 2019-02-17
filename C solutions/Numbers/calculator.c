#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("Enter your desired operation without spaces:\n");
  char *operation = NULL;
  size_t size;
  if (getline(&operation, &size, stdin) == -1) {
    printf("No line has been read\n");
  } else {
    char *p = strtok(operation, "+-");
    while (p) {
      int value = atoi(*p);
      
    }
  }
  return 0;
}
