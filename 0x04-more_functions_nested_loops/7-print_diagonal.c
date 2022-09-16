#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: an input integer
 *no return value
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i >= 2)
			{
				_putchar('\\');
				_putchar('\n');
				while (i > 1)
				{
					_putchar(' ');
					i--;
				}
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
