#include "main.h"

/**
 * strcmp - compare two strings
 * @a: a pointer to an array
 * @n: an input integer
 */
void reverse_array(int *a , int n)
{
	int i = 0, tab;

	while (i < n--)
	{
		tab = *(a + i);
		*(a + i++) = a[n];
		a[n] = tab;
	}
}
