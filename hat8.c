#include <stdio.h>

int main() {
int age = 15;
char *msg = (age >=18) ? "Adult" : "Minor";
printf("%s\n", msg);

return 0;
}
