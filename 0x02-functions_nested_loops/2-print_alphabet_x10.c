#include "main.h"

/**
 * print_alphabet_x10 - Entry poiny
 * PRints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alpha = 'a';

		for (; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		count++;
	}
}
