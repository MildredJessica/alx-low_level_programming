#include <stdio.h>

/**
 * print_triangle - print triangles
 * @size: Parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size - 1; i > 0; i--)
		{
			for (j = 0; j < size; j++)
			{
				if (j < i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
