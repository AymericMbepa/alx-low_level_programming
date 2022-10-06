#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: an input string
 * @s2: an input string
 * @n: n first bytes of s2 to concatenate to s1
 * Return: a pointer to newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *concat_nstring;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len2 <= n)
		n = len2;

	concat_nstring = malloc(sizeof(char) * (len1 + n + 1));

	if (concat_nstring == NULL)
		return (NULL);

	while (i < len1)
	{
		concat_nstring[i] = s1[i];
		i++;
	}

	while (i < len1 + n)
	{
		concat_nstring[i] = s2[j];
		i++;
		j++;
	}

	while (i <= len1 + n)
	{
		concat_nstring[i] = '\0';
		i++;
	}

	return (concat_nstring);
}
