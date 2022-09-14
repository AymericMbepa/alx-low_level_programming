#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *@c: an input parameter
 * Return: Absolute value of an integer
 */
int _abs(int c)
{
int value = c;
if (c < 0)
{
value = -c;
}
return (value);
}
