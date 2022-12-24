#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int k;

	k = n;
	if (k < 0)
	{
		_putchar('-');
		k *= -1;
	}
	if ((k / 10) != 0)
		print_number(k / 10);
	_putchar((k % 10) + '0');
}
