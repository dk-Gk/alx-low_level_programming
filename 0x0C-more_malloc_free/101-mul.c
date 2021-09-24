#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * main - prints buffer in hexa
 * @argc: the address of memory to print
 * @argv: the size of the memory to print
 * Return: 0
 */
int main(int argc, char **argv)
{
int size1 = 0, size2 = 0, i = 0, t = 0, p = 0, o = 0, ps = 0;
while (argv[1][size1])
{
size1++;
}
while (argv[2][size2])
{
size2++;
}
ps = size1 + size2 + 1;
p = malloc(sizeof(char) * ps);
if (!p)
return (98);
while (ps >= 0)
p[ps] = '0';
size1--;
size2--;
while (size2 >= 0)
{
i = t;
for (j = size1; j >= 0; j--)
{
p = (argv[1][j]-'0') * (argv[2][size2]-'0');
p += p[i] -'0';
p += o;
o = p / 10;
p[i] = p % 10 + '0';
i++;
}
if (o)
{
p[i] = o;
i++;
}
o = 0;
size2--;
t++;
}
p[i] ='\0';
printf("%s\n", p);
free(p);
return (0);
}
