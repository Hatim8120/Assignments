#include <stdio.h>

int main() {

  int n, sum;
  printf(
      "Enter a number: ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  printf("%d", sum);

  return 0;
}
