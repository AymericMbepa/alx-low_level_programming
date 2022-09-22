#include "main.h"

/**
 * string_toupper - pointer to the string composed of uppercase character
 * @ch: input string
 * Return: pointer to the string composed of uppercase character
 */
char *string_toupper(char *ch)
{
	int k = 0, j = 0;
	char ch1, ch2;

	while (ch[j] != '\0')
		j++;

	for (; k < j; k++)
	{
		for (ch1 = 'a', ch2 = 'A'; ch1 <= 'z'&& ch2 <= 'Z'; ch1++, ch2++)
		{
			if (ch[k] == ch1)
				ch[k] = ch2;
		}
	}

	return (ch);
}
