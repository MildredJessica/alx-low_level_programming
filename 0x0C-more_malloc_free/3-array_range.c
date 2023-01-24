#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum size
 * @max: maximum size
 * Return: pointer to an array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
