#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: a string
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		s[j] = s[i];
		j++;
		i--;
		_putchar(s[j]);
	}
	_putchar('\n');
}
