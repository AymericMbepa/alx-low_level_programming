#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to a char
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	for (; j < i; j++)
		_putchar(*(str + j));

	_putchar('\n');
}
