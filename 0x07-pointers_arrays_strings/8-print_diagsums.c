#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: Parameter
 * @size: Parameter
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int first_sum = 0;
	int second_sum = 0;

	while (i <= (size * size))
	{
		first_sum += a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		second_sum += a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", first_sum, second_sum);
}
