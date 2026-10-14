#include <stdio.h>

int main() {

int a, b, choice;
printf("Enter the first number: ");
scanf("%d", &a);
printf("Enter the Second number: ");
scanf("%d", &b);
printf(
"Select a choice: \n 1: Addition\n 2: Subtraction\n 3: Multiplication\n 4: Division\n 5: Modulus\n");
printf("Choice: ");
scanf("%d", &choice);
// switchcae
switch (choice) {
case 1: printf("%d\n", a + b); break;
case 2: printf("%d\n", a - b); break;
case 3: printf("%d\n", a*b); break;
case 4: printf("%d\n", a/b); break;
case 5: printf("%d\n", a%b); break;
default: printf("Please enter a choice :\n");
}

return 0;
}
