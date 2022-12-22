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
	if (len % 2 == 0)
		i = len / 2;
	else
		i = ((len - 1) / 2) + 1;
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
