#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a 2 dimesional array
 * @width: Row
 * @height: Column
 * Return: 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int row, column;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		arr[row] = malloc(width * sizeof(int));
		if (arr[row] == NULL)
		{
			for (column = 0; column < row; column++)
				free(arr[column]);
			free(arr);
			return (NULL);
		}
		for (column = 0; column < width; column++)
			arr[row][column] = 0;

	}
	return (arr);
}
