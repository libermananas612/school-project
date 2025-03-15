#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("Even\n");
  } else {
    printf("Odd\n");
  }

  return 0;
}
