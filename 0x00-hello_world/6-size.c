#include <stdio.h>
/**
 * main - A program to display size of types
 * Return: Always 0 (success)
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float f;
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
