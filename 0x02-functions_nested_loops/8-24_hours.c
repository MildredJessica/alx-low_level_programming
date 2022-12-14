#include "main.h"
/**
 * jack_bauer - Prints all the minutes of the day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int num1 = 0;
	int minutes, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		int h = num1 + hour;

		for (minutes = 0; minutes <= 59; minutes++)
		{
			int min = num1 + minutes;

			_putchar(h + '0');
			_putchar(':');
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}
