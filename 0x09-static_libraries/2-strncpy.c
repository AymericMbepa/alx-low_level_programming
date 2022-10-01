#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: an input sting
 * @src: an input string
 * @n: an input integer
 * Return: a pointers to a copy string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
