#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch1 = 'a';
while (ch1 <= 'z' && ch1 != 'q' && ch1 != 'e')
{
putchar(ch1);
ch1++;
}
putchar('\n');
return (0);
}
