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
	printf("Prinst here %d\n", d);
	for (i = 0; i < d/2; i++)
	{
		temp = s[i];
		k = d - i - 1;
		printf("Prinst temp %c\n", temp);
		printf("Prints here %d, %s", s[k], s);
		s[i] = s[k];
		printf("Prinst here %c\n ('%s')", s[i], s);
		s[k] = temp;
	}
	printf("\n");
}
