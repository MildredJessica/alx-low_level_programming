#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Prints a string in reverse
 * @s: Parameter
 * Return: Nothing
 */
void rev_string(char *s)
{
	int d, i, k;
	char temp;

	d = strlen(s);
	for (i = 0; i < d / 2; i++)
	{
		temp = s[i];
		k = d - i - 1;
		s[i] = s[k];
		s[k] = temp;
	}
}
