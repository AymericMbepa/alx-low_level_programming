#include "main.h"

unsigned int power(unsigned int a, unsigned int b);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: an inpu pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, uint = 0, strlenght = 0;

	if (b == NULL)
		return (0);
	while (b[strlenght] != '\0')
		strlenght++;

	for (i = strlenght - 1, j = 0; j < strlenght; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
			uint += power(2, j);
	}
	return (uint);
}

/**
 * power - compute a power b
 * @a: an input unsigned int
 * @b: an input unsigned int
 * Return: a power b
 */

unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int i = 1, pow = 1;

	if (b == 0)
		return (1);
	for (; i <= b; i++)
		pow *= a;
	return (pow);
}
