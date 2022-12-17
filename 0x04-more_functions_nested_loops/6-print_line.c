#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Parameter
 * Return: Nothing
 */
void print_line(int n)
{
	int num = 0;

	if (n > 0)
	{
		for (; num <= n; num++)
		{
			_putchar('_');
		}
	} else
		_putchar('\n');
	_putchar('\n');
}
