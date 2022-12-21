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
	int l, temp, len;

	len = strlen(s);
	for (l = 0; l < len / 2; l++)
	{
		printf("Here");
		temp = s[l];
		s[l] = s[len - 0 - 1];
		_putchar(s[l]);
		s[len - l - 1] = temp;
		_putchar(s[len - l - 1]);
	}
	_putchar('\n');
}
