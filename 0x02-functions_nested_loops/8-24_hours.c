#include "main.h"
/**
 * jack_bauer - Prints all the minutes of the day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int num1 = 00;
	int minutes, hour = 0;

	for (; hour <= 23; hour++)
	{
		int h = num1 + h;

		for (; minutes <= 59; minutes++)
		{
			int min = num1 + minutes;

			_putchar(h + '0');
			_putchar(':');
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}
