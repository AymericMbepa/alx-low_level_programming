#include "main.h"

/**
 * string_toupper - pointer to the string composed of uppercase character
 * @ch: input string
 * Return: pointer to the string composed of uppercase character
 */
char *string_toupper(char *ch)
{
	int k = 0, j = 0;
	char c1, c2;

	while (ch[j] != '\0')
		j++;

	for (; k < j; k++)
	{
		for (c1 = 'a', c2 = 'A'; c1 <= 'z'&& c2 <= 'Z'; c1++, c2++)
		{
			if (ch[k] == ch1)
				ch[k] = ch2;
		}
	}

	return (ch);
}
