#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = '0';
char letter = 'a';
while (digit <= '9')
{
putchar(digit);
digit++;
} 
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
} 
