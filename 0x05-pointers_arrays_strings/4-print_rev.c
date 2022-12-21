#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: Parameter
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
