#include "main.h"
/**
 * print_sign - check alphabets
 *@n: the number
 * Return: Always 0
 */
int print_sign(int n)
{
int i = 0;
if (n > 0)
{
_putchar('+');
i = 1;
}
else if (n == 0)
{
_putchar('0');
i = 0;
}
else
{
_putchar('-');
i = -1;
}
return (i);
}
