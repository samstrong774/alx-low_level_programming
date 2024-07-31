#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int de = 0;

	while (de < n && src[de] != '\0')
	{
		dest[de] = src[de];
		de++;
	}
	while (de < n)
	{
		dest[de] = '\0';
		de++;
	}
	return (dest);
}
