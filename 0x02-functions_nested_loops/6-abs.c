#include "main.h"

/**
 * _abs - Computes the absolute value of an int
 * @c: Parameter
 * Computes the absolute value of c
 * Return: Absolute value of int
 */
int _abs(int c)
{
	int k = c * - 1;

	if (c >= 0)
	{
		_putchar(c);
	} else
	{
		_putchar(k);
	}
	return (0);
}