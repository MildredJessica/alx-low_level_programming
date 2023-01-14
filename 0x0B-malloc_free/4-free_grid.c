#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * frree_grid - Frees a 2 dimensional array
 * @grid: Two dimensional arrays
 * @height: height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
		return;
	for (y = 0; y < height; y++)

		free(grid[y]);
	free(grid);


}
