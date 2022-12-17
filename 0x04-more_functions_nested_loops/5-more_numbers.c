#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j = 0;

	for (; i < 15; i++)
	{
		for (; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
		_putchar('\n')
	}
}
