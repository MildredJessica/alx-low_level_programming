#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse an array of integers
 * @a: Array
 * @n: length of the array
 * Return:Nothing
 */
void reverse_array(int *a, int n)
{
	int i = n;
	int j, temp;

	for (i = n - 1, j = 0; i >= 0 && j < i; i--, j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
