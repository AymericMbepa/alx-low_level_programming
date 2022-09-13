#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: no value
 */
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
