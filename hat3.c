
#include <stdio.h>
//This is code 3.
int main() {
int a = 6;
unsigned int b = 360;
char ch = '2';
float f = 5.43f;
double d = 234.89;
long int li = 1234567890L;
char str[] = "Hello C";

printf("Integer : %d\n", a);
printf("Unsigned : %u\n", b);
printf("Character : %c\n", ch);
printf("Float : %.2f\n", f);
printf("Double : %.6lf\n", d);
printf("Long int : %ld\n", li);
printf("String : %s\n", str);
printf("Hex : %x\n", b);
printf("Octal : %o\n", a);
printf("Address : %p\n", &a);
printf("Percent : %%\n");

  return 0;
}
