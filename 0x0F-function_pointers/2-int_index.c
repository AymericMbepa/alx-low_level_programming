#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: a pointer to an array of integers
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp function
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			j = i;
			break;
		}
		else
			j = -1;
	}

	return (j);
}
