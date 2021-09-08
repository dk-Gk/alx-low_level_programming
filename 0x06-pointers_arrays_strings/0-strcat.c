#include "main.h"
/**
 * _strcat - function that prints a string in revers
 * @dest: pointer value
 * @src: pointer value
 * Return: the concatenated strings
 */
char *_strcat(char *dest, char *src)
{
int c = 0, i, j = 0;
while (dest[c] != '\0')
{
c = c + 1;
}
for (i = 0; i <= c; i++)
{
while (i == c && src[j] != '\0')
{
j++;
dest[c + j] = src[j - 1];
}
}
return (dest);
}
