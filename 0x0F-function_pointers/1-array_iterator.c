#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints element in the array
 * @size: Size of the array
 * @array: Array
 * @action: The ponter to a function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count = 0;

	if (array == 0 && action != NULL)
		return;
	while (count !=  size)
	{
		action(array[count]);
		count++;
	}
}
