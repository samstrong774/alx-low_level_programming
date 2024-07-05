#include "main.h"

/**
 *_isdigit  function that checks for digit from (0-9)
 * @c: parameters
 * Return (1) if it is a number else otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}
