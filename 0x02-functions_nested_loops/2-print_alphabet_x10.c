#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: no value
 */
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0 ; i <= 18 ; i++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
