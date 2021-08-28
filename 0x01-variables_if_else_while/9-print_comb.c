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
if (i < 9)
{
putchar((i % 10) + '0');
putchar(44 + ' ');
}
else
{
putchar((i%10) + '0');
}
}
return (0);
}
