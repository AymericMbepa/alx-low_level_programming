#include "main.h"

/**
 * _isalphs - check for alphabetic character
 *@c is an input character
 * Return: 1 if it is and 0 otherwise
 */
int _isalpha(int c)
{
char ch1;
char ch2;
int value = 0;
for (ch1 = 'a', ch2 = 'A' ; ch1 <= 'z', ch2 <= 'Z' ; ch1++, ch2++)
{
if (value == ch1 || value == ch2)
value = 1;
}
return (value);
}
