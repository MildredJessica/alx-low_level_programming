#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * print_last_digit - Prints the digit of a number
 * @d: Parameter
 * Prints the last digit of d
 * Return: the last digit
 */
int print_last_digit(int d)
{
	int num = 0;

	if (d < 0)
	{
		num = -1 * (d % 10);
		_putchar(num + '0');
	} else
	{
		num = d % 10;
		_putchar(num + '0');
	}
	return (num);
}
