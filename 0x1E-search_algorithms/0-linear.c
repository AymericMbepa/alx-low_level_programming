#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that search for a value in an array of integer
 * @array: a pointer to the first element of an array to search in
 * @size: the number of element of array
 * @value: is the value to search for
 * Return: the first index where value matchse array value
 */

int linear_search(int *array, size_t size, int value)
{
	int i, bit = -1;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int) size; i++)
	{
		if (array[i] == value)
			bit = 1;
	}
	i = 0;
	while (i < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
		i++;
	}
	if (bit == -1)
		return (-1);
	return (i);
}
