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

	for (; s[len] != '\0'; len++)
		continue;

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
