#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i <= n - 1)
{
dest[i] = src[i];
i++;
}
return (dest);
}
