#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binaryToDec(char* binary) {
  int i;
  int decimal = 0;
  int length = strlen(binary);
  for (i = 0; i < length; i++) {
    char c = binary[i];
    int digitValue = atoi(&c);
    int value;
    if (length - 1 == i) {
      value = digitValue;
    } else {
      value = (2 << (length - i - 2)) * digitValue;
    }
    decimal += value;
  }
  return decimal;
}

int main(int argc, char* argv[]) {
  if (argc < 3) {
    printf("Error\n Usage: ./convert flag value\n");
    return -1;
  }
  char flag = *argv[1];
  if (flag == 'b') {
    int value = atoi(argv[2]);

    if (value == 0) {
      printf("The initial value was: %d. The binary value is 0\n", value);
      return 0;
    }

    printf("The initial value was: %d. The binary value is: ", value);

    char binary[512];
    int i = 512;
    while (value > 0) {
      binary[i] = value % 2 == 0 ? '0' : '1';
      i--;
      value /= 2;
    }

    printf("%s\n", binary + i + 1);
    return 0;
  } else if (flag == 'd') {
    char *binary = argv[2];
    int decimal = binaryToDec(binary);
    printf("%d\n", decimal);
    return 0;
  }

  return 0;
}
