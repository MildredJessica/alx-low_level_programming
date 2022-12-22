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
	int n = 1;

	while (*s++)
	{
		if (*s == '-')
			n *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	}
	return (num * n);
}
