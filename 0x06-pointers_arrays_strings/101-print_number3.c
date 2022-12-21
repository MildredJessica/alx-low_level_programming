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
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
