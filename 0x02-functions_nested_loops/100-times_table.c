#include "main.h"

/**
 * print_times_table- Prints the n times table
 * @n: Parameter
 * Prints n times table only if n is not greater than 15 or greater than 0
 * Return: Nothing
 */
void print_times_table(int n)
{
	if (n >= 0 || n < 15)
	{
		int row, column;

		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				int d = row * column;

				if (d > 9)
				{
					_putchar((d / 10) + '0');
				} else
				{
					_putchar(' ');
				}
				_putchar((d % 10) + '0');
				if (column < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
