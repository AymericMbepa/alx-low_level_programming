#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to set bit from
 * @index: the idex the bit set at
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mx = 0x01;

	mx <<= index;

	if (mx == 0)
		return (-1);

	if ((mx & *n))
		return (1);
	*n = *n + mx;
	return (1);
}
