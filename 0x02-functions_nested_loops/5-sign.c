#include "main.h"

/**
 * print_sign -  prints the sign of a number.
 *@n: An input character
 * Return: 0 -1 or 1
 */
int  print_sign(int n)
{
	int value = 1;
	if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	else
	{
		if (n == 0)
		{
			value = 0;
			_putchar('0');
		}
		else
			_putchar('+');
	}
	return (value);
}
