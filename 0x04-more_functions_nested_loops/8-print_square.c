#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 * @size: an input integer
 * no return value
 */

void print_square(int size)
{
	int i = 0, j;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
