#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9).
 * @c: An input value
 * Return: 1 if it is and 0 otherwise
 */

int _isdigit(int c)
{
	int ch;

	int value = 0;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		if (c == ch)
			value = 1;
	}
	return (value);
}
