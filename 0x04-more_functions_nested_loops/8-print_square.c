#include "main.h"

/**
 * print_square - print square
 * @size: Parameter
 * Return: Nothing
 */
void print_square(int size)
{
	int i = 0, k;

	while (i < n && n > 0)
	{
		k = 0;
		while (k < n)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
