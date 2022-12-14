#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Prints all the minutes of the day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int minutes, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			if (hour <= 9 || minutes <= 9)
			{
				_putchar('0');
				_putchar(hour);
				_putchar(':');
				_putchar('0');
				_putchar(minutes);
				_putchar('\n');
			} else
			{
				_putchar(hour + '0');
				_putchar(':');
				_putchar(minutes + '0');
				_putchar('\n');
			}
		}
	}
}
