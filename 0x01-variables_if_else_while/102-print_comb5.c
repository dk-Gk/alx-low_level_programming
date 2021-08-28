#include <stdio.h>
/**
 * main - prints all possible combo of two two digits 0-9
 * Return: returns 0
 */
int main(void)
{
int i;
int j;
int z;
for (i = 0; i < 10; i++)
{
for (j = i+1; j < 10; j++)
{
putchar('0' + (i % 10) + '0');
putchar(' ');
putchar('0' + (j % 10) + '0');
if (i < 9)
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
