#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: String
 * Return: Duplicate String
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int i, len;

	len = strlen(str) + 1;
	dest = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (dest == NULL)
			return (NULL);
		dest[i] = str[i];
	}
	return (dest);
}
