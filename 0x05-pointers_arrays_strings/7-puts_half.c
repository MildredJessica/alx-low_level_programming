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
	int len, p, i;

	len = strlen(str);
	if (len % 2 == 0)
		p = len / 2;
	else
		p = (len - 1) / 2;
	for (i = p ; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
