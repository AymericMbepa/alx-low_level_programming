#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: an input string
 * @s2: an input string
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1 = 0, len2 = 0, j = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (; i < (len1 + len2) && j < len2; i++, j++)
		concat_str[i] = s2[j];

	while (i <= (len1 + len2))
	{
		concat_str[i] = '\0';
		i++;
	}

	return (concat_str);
}
