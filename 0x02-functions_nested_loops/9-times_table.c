#include "main.h"

/**
 * time_table -prints the 9 times table, starting with 0.
 *
 * no return vales
 */

void time_table(void)
{
	int i = 0, j;

	for (; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
