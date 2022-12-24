#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	num = n;
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
