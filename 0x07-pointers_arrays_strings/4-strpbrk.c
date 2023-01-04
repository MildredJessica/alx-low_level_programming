#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search a string for any set of byte
 * @s: Parameter
 * @accept: PArameter
 * Return: A pointer to the byte s otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
