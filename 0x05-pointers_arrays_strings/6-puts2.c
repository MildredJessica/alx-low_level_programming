#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * put2 - Prints everyother character starting with the first character
 * @str: Parameter
 * Return: Nothing
 */
void put2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
