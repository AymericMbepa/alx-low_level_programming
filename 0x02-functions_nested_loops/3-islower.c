#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * Return: 1 if it is and 0 otherwise
 */
int _islower(int c)
{
int ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if c == ch
return (1);
else
return (0);
}
}
