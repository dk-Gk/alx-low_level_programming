#include "main.h"
/**
 * *_strpbrk - search for string
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
return (s);
}
}
s++;
}
return ('\0');
}
