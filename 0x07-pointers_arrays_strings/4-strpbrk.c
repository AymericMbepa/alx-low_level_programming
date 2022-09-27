#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searche a string for any of a set of bytes
 * @s: a pointer to a sting
 * @accept: a pointer to a string
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, k, l, t = 0;
	char *n;

	while (s[i] != '\0')
		i++;

	while (accept[j] != '\0')
		j++;

	for (k = 0; k < j; k++)
	{
		for (l = 0; l < i; l++)
		{
			if (s[l] == accept[k])
				break;
			else
				n = NULL;
		}
	}
	if (n != NULL)
	{
		for (; l < i; l++)
		{
			*(n + t) = s[l];
			t++;
		}
	}

	return (n);
}
