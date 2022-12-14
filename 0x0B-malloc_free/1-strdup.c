#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: an input string
 * Return:  a pointer to a newly allocated space in memory,
 * NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str != NULL)
	{
		for (; j < i; j++)
			new_str[j] = str[j];

		for (; j <= i; j++)
			new_str[j] = '\0';
		return (new_str);
	}

	return (NULL);
}
