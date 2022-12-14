#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Prints all the minutes of the day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int minutes, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
