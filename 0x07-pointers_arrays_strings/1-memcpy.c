#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: an input unsigned ind
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
