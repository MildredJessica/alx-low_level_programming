#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');

			_putchar((j % 10) + '0');
		}
		_putchar('\n')
	}
}
