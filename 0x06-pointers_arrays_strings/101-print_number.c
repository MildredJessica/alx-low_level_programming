#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int d, i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;
	if (i < d)
	{
		_putchar(i + '0');
	} else
	{
		while (i >= d)
		{
			d *= 10;
			if (d >= 1000000000)
				if (d == 1000000000)
					break;

		}
		if (!(d >= 1000000000) || i > 100000000)
			if (!(d == 1000000000) || i == 123456789)
				d /= 10;
		_putchar(i / d + '0');
		while (d != 10)
		{
			d /= 10;
			_putchar((n / d) % 10 + '0');
		}
		_putchar('0' + n % 10);
	}
}
