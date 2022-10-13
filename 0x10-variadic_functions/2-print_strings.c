#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: is the string to be printed between the strings
 * @n:  is the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *b;
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		b = va_arg(list, char *);
		if (b == NULL)
			printf("(nil)");
		else
			printf("%s", b);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
