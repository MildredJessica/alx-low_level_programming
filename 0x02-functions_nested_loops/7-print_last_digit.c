#include "main.h"

/**
 * print_last_digit - Prints the digit of a number
 * @d: Parameter
 * Prints the last digit of f
 * Return: the last digit
 */
int print_last_digit(int d)
{
	int num = _abs(d) % 10;

	_putchar(num + '0');
	return (num);
}
