#include "main.h"

/**
 * _isupper - check for lowercase character
 * @c: An input character
 * Return: 1 if it is and 0 otherwise
 */

int _isupper(int c)
{
	char ch;

	int value = 0;

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		if (c == ch)
			value = 1;
	}
	return (value);
}
