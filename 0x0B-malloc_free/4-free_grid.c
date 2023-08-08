#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D array
 * @grid: array to free
 * @height: number of sub-arrays
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i, h;

	h = height;
	for (i = 0; i < h; i++)
		free(grid[i]);
	free(grid);
}

