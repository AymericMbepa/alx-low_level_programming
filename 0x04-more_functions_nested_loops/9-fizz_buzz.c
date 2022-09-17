#include "main.h"

/**
 * fizz_buzz - The Fizz-Buzz test
 * no return value
 */
void fizz_buzz(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if ((i % 3) && (i % 5))
			{
				_putchar(F);
				_putchar(i);
				_putchar(z);
				_putchar(z);
				_putchar(B);
				_putchar(u);
				_putchar(z);
				_putchar(z);
			}
			else if ((i % 3 == 0) && (i % 5 != 0))
			{
				_putchar(F);
				_putchar(i);
				_putchar(z);
				_putchar(z);
			}
			else
			{
				_putchar(B);
				_putchar(u);
				_putchar(z);
				_putchar(z);
			}
		}
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
