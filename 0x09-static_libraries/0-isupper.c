#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Parameter
 * Checks if c is an upeercase
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	return (0);
}
