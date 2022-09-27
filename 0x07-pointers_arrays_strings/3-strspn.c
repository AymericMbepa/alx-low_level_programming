#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: an input string
 * @accept: an input string
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k, l, n = 0;

	while (s[i] != ',' && s[i] != '.' && s[i] != ';')
		i++;

	while (accept[j] != '\0')
		j++;

	for (k = 0; k < j; k++)
	{
		for (l = 0; l < i; l++)
			if (s[l] == accept[k])
				n++;
	}

	return (n);
}
