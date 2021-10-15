#include <stdio.h>
#include "main.h"
/**
 * p - calc power of number
 * @i: number 2
 * @j: number of times i is raised to
 * Return: the result
 */
unsigned int p(unsigned int i, unsigned int j)
{
unsigned int k = 1, r;
r = i;
if (j == 0)
{
return (1);
}
while (k != j)
{
r = i * r;
k++;
}
return (r);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;
flag = 0;
divisor = p(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
