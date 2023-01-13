#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of characters
 * @size: Size of the array
 * @c: Character to use to fill the array
 * Return: Null if size is 0 otherwise a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arrChar;
	unsigned int i;

	arrChar = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arrChar[i] = c;
	}
	free(arrChar);
	return (arrChar);
}
