#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s2: an imput string
 * @s1: an imput string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, n, k;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i > j)
		n = 15;
	else if (i < j)
		n = -15;
	else
	{
		for (k = 0; k < i; k++)
		{
			if (s1[k] == s2[k])
				n = 0;
			else if (s1[k] > s2[k])
				n = 15;
			else
				n = -15;
		}
	}

	return (n);
}
