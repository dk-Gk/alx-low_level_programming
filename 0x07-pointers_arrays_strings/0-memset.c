#include "main.h"
/**
 * *_memset - prints buffer in hexa
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: memory constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
