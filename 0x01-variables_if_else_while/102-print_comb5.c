#include <stdio.h>
/**
 * main - prints all possible combo of two two digits 0-9
 * Return: returns 0
 */
int main(void)
{
for (int i = 0; i < 100; i++)
{
for (int j = 0; j < 100; j++)
{
if (i < j && i != j)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar ((j / 10) + '0');
putchar ((j % 10) + '0');
if (!(i == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar ('\n');
return (0);
}
