#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: String1
 * @s2 : String2
 * Return: A number
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
