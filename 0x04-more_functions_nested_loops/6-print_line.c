#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * no return value
 */

void print_line(int n)
{
	int i = 0;

	for (; i < n ; i++)
	{
		if (n == 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
