
#include "main.h"

/**
* _strncat - function concatenate two strings
* using at most n bytes from s
* @dest: entered value
* @src: entered value
* @n: entered value
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int ant = 0;
	int b;

	while (dest[ant] != '\0')
	{
	ant++;
	}
	b = 0;
	while (b < n && src[b] != '\0')

	{
	dest[ant] = src[b];
	ant++;
	b++;
	}
	dest[ant] = '\0';
	return (dest);
}
