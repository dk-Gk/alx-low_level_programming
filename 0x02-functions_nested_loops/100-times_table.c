#include "main.h"
/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
int i = 0, mul, j;
if (n >= 0 && n < 15)
{
for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n + 1; j++)
{
mul = i * j;
if (mul < 10)
{
if (j > 0)
{
_putchar (' ');
_putchar (' ');
}
_putchar (mul + '0');
}
else if (mul > 9 && mul < 100)
{
_putchar (' ');
_putchar (mul / 10 + '0');
_putchar (mul % 10 + '0');
}
else
{
_putchar (mul / 100 + '0');
_putchar (mul / 10 % 10 + '0');
_putchar (mul % 10 + '0');
}
if (j < n)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
}
