#include <stdio.h>

int main() {
  int sum = 0;

  printf("The first 10 odd natural numbers are: ");

  for (int i = 1, count = 0; count < 10; i += 2, count++) {
    printf("%d ", i);
    sum += i;
  }

  printf("\nSum of the first 10 odd natural numbers = %d\n", sum);

  return 0;
}
