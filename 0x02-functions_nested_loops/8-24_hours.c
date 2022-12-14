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
			if (hour > 9 || minutes > 9)
			{
				printf("%d0", hour);
				_putchar(':');
				printf("%d0", minutes);
			} else
			{
				printf("%d", hour);
				_putchar(':');
				printf("%d", minutes);
			}
			_putchar('\n');
		}
	}
}
