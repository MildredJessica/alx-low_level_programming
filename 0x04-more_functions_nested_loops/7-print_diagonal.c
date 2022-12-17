#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Parameter
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i <= n && n > 0)
	{
		_putchar('\');
		i++;
	}
	_putchar('\n');
}
