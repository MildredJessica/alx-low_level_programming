#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Parameter
 * Return: Nothing
 */
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
		_putchar('\n');
	_putchar('\n');
}
