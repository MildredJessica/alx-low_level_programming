#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14
 * Return: Nothing
 */
void more_numbers(void)
{
	int num = 0;

	while (num < 15)
	{
		if (num > 9)
			_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
