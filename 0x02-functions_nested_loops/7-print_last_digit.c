#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Prints the digit of a number
 * @d: Parameter
 * Prints the last digit of d
 * Return: the last digit
 */
int print_last_digit(int d)
{
	int a = abs(d);
	int num = a % 10;

	_putchar(num + '0');
	return (num);
}
