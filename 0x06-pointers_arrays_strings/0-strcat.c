#include "main.h"
/**
 * _strcat - function that prints a string in revers
 * @dest: pointer value
 * @src: pointer value
 * Return: the concatenated strings
 */
char *_strcat(char *dest, char *src)
{
int c = 0, i, j;
for (i = 0; dest[i] != '\0'; i++)
{
c = c + 1;
}
for (i = 0; src[j] != '\0'; i++)
{
dest[c] = src[j];
c++;
}
return (dest);
}
