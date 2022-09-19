#include "main.h"

/**
 * _strlrn - return the lenght of string
 * @s: a string
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
