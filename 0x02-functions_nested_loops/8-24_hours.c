#include "main.h"
/**
 * jack_bauer - computes alphabet
 * Return: Always 0
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < j && i != j)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(58);
_putchar ((j / 10) + '0');
_putchar ((j % 10) + '0');
}
}
}
}
