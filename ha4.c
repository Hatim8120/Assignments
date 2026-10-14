#include <stdio.h>


int main() {
  int number, factorial = 1, i = 1;
  printf("Enter a number: ");
  scanf("%d", &number);
  while (i <= number) {
    factorial *= i;
    i++;
  }
  printf("Factorial of %d = %d", number, factorial);
  return 0;
}
