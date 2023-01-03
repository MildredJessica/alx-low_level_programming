#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Parameter
 * @accept: Parameter
 * Return:number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if  (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}
