#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @dest: an imput string
 * @src: an imput string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, n;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i > j)
		n = 15;
	else if (i < j)
		n = -15;
	else
		n = 0;

	return (n);
}
