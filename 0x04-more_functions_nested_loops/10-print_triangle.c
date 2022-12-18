#include "main.h"

/**
 * print_triangle - Prints triangles
 * @size: Parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
