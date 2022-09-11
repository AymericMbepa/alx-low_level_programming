#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j = '0', '0';
while(i <= '9')
{
while(j <= '9')
{
while(i > j || i == j)
j++;
putchar(i);
putchar(j);
if (i != '8' && j != '9')
putchar(',');
putchar(' ');
j++;
}
i++;
}
return (0);
}
