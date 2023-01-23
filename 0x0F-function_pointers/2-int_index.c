#include "function_pointers.h"
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
	int count;
	
	if (array != 0 && size > 0 && cmp != 0)
	{
		for (count = 0; count < size; count++)
			if (cmp(array[count]))
				return (count);
	}
	else
		return (-1);
	return (-1);
}
