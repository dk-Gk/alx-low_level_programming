#include <stdio.h>
/**
 * main - prints a base 16
 * Return: returns 0
 */
int main(void)
{
int ch;
char cch = 'a';
for (ch = 0; ch <= 10; ch++)
{
if (ch == 10)
{
for (cch = 'a'; cch <= 'f'; cch++)
{
putchar(cch);
}
}
else
{
putchar((ch % 10) + '0');
}
}
putchar('\n');
return (0);
}
