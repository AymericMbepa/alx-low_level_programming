#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - fonction that search fo a value in a sorted array of integer
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: is the value to search for
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t beg = 0, end = size - 1;
	int i, mn;

	if (array == NULL)
		return (-1);

	while (beg <= end)
	{
		printf("Searching in array: ");
		for (i = (int) beg; i <= (int) end; i++)
		{
			printf("%d", array[i]);
			if (i != (int) end)
				printf(", ");
			else
				printf("\n");
		}
		mn = (int) ((beg + end) / 2);
		if (array[mn] < value)
			beg = mn + 1;
		else
		{
			if (array[mn] > value)
				end = mn - 1;
			else
			{
				return (mn);
			}
		}
	}
	return (-1);
}
