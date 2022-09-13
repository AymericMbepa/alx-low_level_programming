#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: An input character
 * Return: 1 if it is and 0 otherwise
 */
int _islower(int c)
{
char ch;
int value = 0;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (c == ch)
value = 1;
}
return (value);
}
