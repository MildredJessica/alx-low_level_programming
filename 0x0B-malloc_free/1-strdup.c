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
	if (str == NULL)
		printf("Failed to allocate memory\n");
	char *dest = strdup(str);

	return (dest);
}
