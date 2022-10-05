#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of array
 * @height: height of array
 * Return:  returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **malloc_grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	malloc_grid = (int **)malloc(sizeof(int *) * height);

	if (malloc_grid == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		malloc_grid[i] = (int *)malloc(sizeof(int) * width);
		if (malloc_grid == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (; j < height; j++)
			malloc_grid[i][j] = 0;
	}

	free(malloc_grid);
	return (malloc_grid);
}
