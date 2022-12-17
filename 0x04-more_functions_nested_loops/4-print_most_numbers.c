#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Prints numbers excluding 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num + '0');
	}
	_putchar('\n');
}
