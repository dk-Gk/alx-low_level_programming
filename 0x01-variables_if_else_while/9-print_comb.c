#include <stdio.h>
/**
 * main - prints all possible combo of nums 0-9
 * Return: returns 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
putchar(44);
putchar(' ');
}
putchar('\n');
return (0);
}
