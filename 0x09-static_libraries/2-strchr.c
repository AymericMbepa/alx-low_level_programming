#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: a pointer to an string
 * @c: an input char
 * Return:a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
	char *n;

	while (s[i] != '\0')
		i++;

	for (; j < i; j++)
	{
		if (s[j] == c)
			break;
	}

	n = &s[j];
	if (*n != c)
		n = NULL;

	return (n);
}
