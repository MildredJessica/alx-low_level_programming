#include "main.h"
/**
 * print_alphabet - Entry point
 * prints the alphabets
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
