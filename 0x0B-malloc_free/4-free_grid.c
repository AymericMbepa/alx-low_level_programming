#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid: an input two dimensional array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
		free((int *)grid[i++]);

	free(grid);
}
