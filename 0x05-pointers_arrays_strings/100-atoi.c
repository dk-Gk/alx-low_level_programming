#include "main.h"
#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: pointer
 * Return: integer if there are no integers return 0
 */
int _atoi(char *s)
{
unsigned int i = 0, a = 0, b = 0, c = 1, d = 1, n, r;
while (s[i])
{
if (a > 0 && (s[i] < '0' || s[i] > '9'))
{
break;
}
if (s[i] == '-')
{
c *= -1;
}
if ((s[i] >= '0') && (s[i] <= '9'))
{
if (a > 0)
{
d *= 10;
}
a += 1;
}
i++;
}
for (n = i - a; n < i; n++)
{
b = b + ((s[n] - 48) * d);
d /= 10;
}
r = b * c;
return (r);
}
