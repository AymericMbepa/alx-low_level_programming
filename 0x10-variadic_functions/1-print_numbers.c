#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator:  is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
			printf("%d", va_arg(list, int));
		va_end(list);
	}
	else
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
				printf("%d%s", va_arg(list, int), separator);
			else
				printf("%d", va_arg(list, int));
		}
		va_end(list);
	}
	printf("\n");
}
