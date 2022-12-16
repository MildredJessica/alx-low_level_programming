#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Prints numbers excluding 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	char num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
			num++;
		}
	}
	_putchar('\n');
}
