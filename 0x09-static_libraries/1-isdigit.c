#include "main.h"

/**
 * _isdigit -  Checks if the c is an int
 * @c: Parameter
 * Checks if c is a digit
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}
