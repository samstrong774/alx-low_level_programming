#include "main.h"

/**
 * _isalpha - searches for alphabetic character
 * @c: the character to be searched
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
