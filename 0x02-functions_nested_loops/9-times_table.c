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
		for (b = 0 ; b <= 9; b++)
		{
			_putchar((a * b) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('$');
		}
		_putchar('\n');
	}
}
