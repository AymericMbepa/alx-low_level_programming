#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: an input string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	int lenght_string()
	{
		if (i >= 0 && s[i] != '\0')
		{
			i++;
			lenght_string();
		}
		return (i);
	}

	void print_rev_string()
	{
		if (lenght_string() > 0)
		{
			_putchar(*(s + (lenght_string() - 1)));
			lenght_string()--;
			print_rev_string();
		}
	}
}
