#include <stdio.h>
/**
 * main - prints all possible combo of two digits 0-9
 * Return: returns 0
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i < 8)
{
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
