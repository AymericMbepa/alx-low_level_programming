#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * no Return value
 */
void jack_bauer(void)
{
int a, b, c, d;
for (a = '0'; a <= '2'; a++)
{
if (a != 2)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '5'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
else
{
for (b = '0'; b <= '3'; b++)
{
for (c = '0'; c <= '5'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}
}
