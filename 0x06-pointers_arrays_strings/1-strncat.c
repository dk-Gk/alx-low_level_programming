#include "main.h"
/**
 *_strncat - a function that concatinate strings
 *@dest: pointer of string
 *@src: pointer of sring
 *@n: size
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, k = 0;
for (; dest[k]; k++)
{
}
while (j < n && src[j])
{
dest[k + i] = src[j];
i++;
j++;
}
return (dest);
}
