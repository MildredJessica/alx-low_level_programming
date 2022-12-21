#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts a string to uppercase
 * @str: String
 * Return: str
 */
char *string_toupper(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
		continue;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return str;
}
