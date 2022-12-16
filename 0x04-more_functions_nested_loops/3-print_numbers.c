#include "main.h"

/**
 * print_numbers - Prints number from 0 to 9
 * Prints numbers fro 0 to 0
 * Return: Nothing
 */
void print_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		_putchar(count + '0');
		count++;
	}
	_putchar('\n');
}
