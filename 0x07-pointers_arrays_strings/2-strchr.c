#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: Parameter
 * @c:Parameter
 * Return: s otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
