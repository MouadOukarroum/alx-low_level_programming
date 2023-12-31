#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated by another function.
 * @grid: function to be freed
 * @height: number of row of 2D array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
