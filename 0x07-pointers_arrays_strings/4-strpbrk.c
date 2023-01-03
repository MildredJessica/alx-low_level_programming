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
	int j = 0;
	
	printf("Okay");
	while (*s)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
