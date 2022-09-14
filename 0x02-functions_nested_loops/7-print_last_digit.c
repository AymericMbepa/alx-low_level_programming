#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @c: is an enter parameter
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
  int last_digit;

  if (c < 0)
    last_digit = -1 * (c % 10);
  else
    last_digit = c % 10;

  _putchar(last_digit);
  _putchar('\n');

  return (last_digit % 10);
}
