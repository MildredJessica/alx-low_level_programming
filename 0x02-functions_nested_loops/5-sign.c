#include "main.h"

/**
 *print_sign - Checks whether a number is positive, negative or zero
 *@n: Parameter
 *Check if n is negative positive or zero
 *Return: 1 if n is positive, -1 if n is negative, and 0 if n is zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-' + '0');
		_putchar('1');
		return (-1);
	} else if (n > 0)
	{
		_putchar('+' + '0');
		_putchar('1');
		return (1);
	} else if (n == 0)
	{
		_putchar('0' + '0');
		_putchar('0');
		return (0);
	}
	return (0);

}
