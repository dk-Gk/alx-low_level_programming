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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if false
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int r = 0, count = 0, i, c;
while (*b != '\0')
{
count++;
if (*b != '0' && *b != '1')
{
return (0);
}
b++;
}
c = count;
while (c != 0)
{
b--;
c--;
}
for (i = 0; i < count; i++)
{
if (b[i] == '1')
{
r = r + p(2, ((count - 1) - i));
}
}
return (r);
}
