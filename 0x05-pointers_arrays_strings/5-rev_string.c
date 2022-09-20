#include "main.h"

/**
 * rev_string - reverse string
 *@s: a string
 */
void rev_string(char *s)
{
	int lenght = 0, j = 0;
	char k;
	
	while (s[lenght] != '\0')
		lenght++;
	while (j < lenght--)
	{
		k = s[j];
		s[j++] = s[lenght];
		s[lenght] = k;
	}
}
