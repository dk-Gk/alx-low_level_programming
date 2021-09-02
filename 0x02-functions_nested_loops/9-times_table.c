#include "main.h"
/**
 * times_table - prints table
 * Return: Always 0
 */
void times_table(void)
{
int i, j, k, n;
for (k = 0; k < 8; k++)
{
for (i = 0; i < 9; i++)
{
for (j = 0; j < 9; j++)
{
n = i * j;
_putchar(n);
if (i < 9)
{
_putchar(44);
_putchar(' ');
}
}
_putchar('\n');
}
_putchar('\n');
}
}
