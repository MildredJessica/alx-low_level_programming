#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string to 1337
 * @str: String
 * Return: String
 */
char *leet(char *str)
{
	char repAlpha[] = "aAeEoOtTlL";
	char rep[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; repAlpha[j] != '\0'; j++)
		{
			if (str[i] == repAlpha[j])
				str[i] = rep[j];
		}
	}
	return (str);
}
