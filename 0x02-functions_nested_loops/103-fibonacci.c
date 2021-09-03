#include <stdio.h>
/**
 * main - sum of only even fibonacci numbers under 4 million.
 * Return: zero
 */
int main(void)
{
unsigned long count, i = 0, j = 1, z, s = 0;
for (c = 0; c < 50; c++)
{
z = i + j;
i = j;
j = z;
if (z % 2 == 0 && z < 4000000)
{
s += z;
}
}
printf("%lu\n", s);
return (0);
}
