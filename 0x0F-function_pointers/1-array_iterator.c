#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: a pointer to an array of integers
 * @size: size of array
 * @action: is a pointer to the function we need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
