#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @c: enter parameter
 * no return value
 */

void print_line(int n)
{
	int i = 0;

	if (n >  0)
	{
	for (; i < n ; i++)
		_putchar('\n');
	}
	_putchar('\n');
}
