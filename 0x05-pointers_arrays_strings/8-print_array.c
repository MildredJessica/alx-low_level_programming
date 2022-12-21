#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - Prints n elements of an array
 * @n: Parameter
 * @a: Parameter
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d", a[i]);
			else
				printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
