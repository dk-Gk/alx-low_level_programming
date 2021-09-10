#include "main.h"
/**
 *print_number - prints integers
 *@n: number to be printed
 *Return: nothing
 */
void print_number(int n)
{
unsigned int u = n;
if (n < 0)
{
_putchar('-');
u = -u;
}
if ((u / 10) > 0)
print_number(u / 10);
_putchar((u % 10) + '0');
}
