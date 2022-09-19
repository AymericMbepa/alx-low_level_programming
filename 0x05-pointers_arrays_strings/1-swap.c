#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: qan integer
 * @b: another integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
