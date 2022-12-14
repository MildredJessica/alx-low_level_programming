#include "main.h"

/**
 * times_table -  prints the 9 times table
 * Returns: nothing
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (b = 1 ; b <= 9; b++)
		{
			int d = a * b;

			if (d > 9)
				_putchar((d / 10) + '0');
			else
				_putchar(' ');
			_putchar((d % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
