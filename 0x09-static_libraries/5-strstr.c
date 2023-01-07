#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: Parameter
 * @needle: Parameter
 * Return: A pointer haystack otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (j != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
