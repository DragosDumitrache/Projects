#include <stdlib.h>
#include <stdio.h>

int main() {
  printf("How large is the array you want to sort?\n");
  int n;
  scanf("%d", &n);
  int i;
  int a[1000];
  printf("Input %d values for your array: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int j;
  for (j = 1; j < n; j++) {
    int key = a[j];
    i = j - 1;
    while (i >= 0 && a[i] > key) {
      a[i + 1] = a[i];
      i--;
    }
    a[i + 1] = key;
  }
  printf("The sorted array is:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
