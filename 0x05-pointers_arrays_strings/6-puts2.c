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
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
