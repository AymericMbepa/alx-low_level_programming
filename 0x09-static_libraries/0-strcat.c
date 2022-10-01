#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: an input string
 * @src: an input string
 * Return: resulting strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k, n = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	for (k = i; k < (i + j); k++)
	{
		*(dest + k) = *(src + n);
		n++;
	}

	while (k <= (i + j))
	{
		*(dest + k) = '\0';
		k++;
	}

	return (dest);
}
