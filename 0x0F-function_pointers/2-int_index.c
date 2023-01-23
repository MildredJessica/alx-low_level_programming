#include "function_ponters.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @size: number of element in the array
 * @cmp: pointer to the function to be used to compare values
 * @array: array
 * Return: The index first found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL && cmp == NULL)
		return;
	for (; count < size; count++)
	{
		if (cmp(array[count])
				return (count);
	}
	return (-1);
}
