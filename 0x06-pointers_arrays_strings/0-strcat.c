#include "main.h"
/**
 * _strcat - function that prints a string in revers
 * @dest: pointer value
 * @src: pointer value
 * Return: the concatenated strings
 */
char *_strcat(char *dest, char *src)
{
int c = 0, i;
while (dest[c] != '\0')
{
c = c + 1;
}
for (i = 0; src[j]<= '\0'; i++)
{
dest[c] = src[j];
c++;
}
return (dest);
}
