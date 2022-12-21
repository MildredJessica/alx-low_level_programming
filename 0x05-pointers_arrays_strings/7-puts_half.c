#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of a string followed by a newline
 * @str: Parameter
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
		len++;

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
