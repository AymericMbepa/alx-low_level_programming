#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integer
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *range_array;
	int i = min, j = 0;

	if (min > max)
		return (NULL);

	range_array = (int *)malloc(sizeof(int) * (max - min + 1));

	if (range_array == NULL)
		return (NULL);

	for (; i <= max; i++)
	{
		range_array[j] = i;
		j++;
	}

	return (range_array);
}
