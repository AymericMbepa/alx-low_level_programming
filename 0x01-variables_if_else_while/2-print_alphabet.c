#include <stdio.h>

/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\0');
return (0);
}
