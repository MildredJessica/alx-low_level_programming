#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Parameter
 * Return: Integer
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign *= -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		num = (num * 10) + s[i] - '0';
	}
	return (num * sign);
}
