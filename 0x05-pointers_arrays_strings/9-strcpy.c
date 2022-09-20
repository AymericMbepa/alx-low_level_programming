#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src, including
the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: a pointer to a char
 * @src: a pointer to a char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0, k = 0;

	while (src[i] != '\0')
		i++;

	for (; j < i; j++)
	{
		dest[k] = src[j];
		k++;
	}

	for (; j <= i; j++)
		dest[j] = '\0';

	return (dest);
}
