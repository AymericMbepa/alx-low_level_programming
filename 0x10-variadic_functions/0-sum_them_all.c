#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: an input unsigned int
 *
 * Return:  the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varb_list;
	unsigned int i, sum = 0;

	va_start(varb_list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(varb_list, int);
	}
	return (sum);
}
