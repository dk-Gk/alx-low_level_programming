#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: zero
 */
int main(void)
{
unsigned long c, i = 0, j = 1, k;
for (c = 0; c < 50; c++)
{
k = i + j;
i = j;
j = k;
printf("%lu", k);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
