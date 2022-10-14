#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format:  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *indetvar;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(list, double));
			break;
		case 'c':
			printf("%c", (char) va_arg(list, int));
			break;
		case 's':
			indetvar = va_arg(list, char *);
			if (indetvar != NULL)
			{
				printf("%s", indetvar);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		     || format[i] == 's') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
