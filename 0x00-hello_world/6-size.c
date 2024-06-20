#include <stdio.h>
/**
 * main - A program to display size of types
 * Return 0 (success)
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
