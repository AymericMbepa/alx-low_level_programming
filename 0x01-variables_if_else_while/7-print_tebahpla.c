#include <stdio.h>

/**
 * main - Entry poit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'z';
while (ch <= 'z')
{
if (ch >= 'a')
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
