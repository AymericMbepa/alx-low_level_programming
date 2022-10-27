#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: an input integer
 * @index: an input index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mx = 0x01;

	mx <<= index;
	if (mx == 0)
		return (-1);

	if ((n & mx))
		return (1);
	else
		return (0);
}
