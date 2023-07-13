#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2d array of alloc_grid function
 * @grid: double pointer to int
 * @height: an integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		/* free memory allocated for each row */
		free(grid[i]);
	}
	/* free memory allocated for array grid */
	free(grid);
}
