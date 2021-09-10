#include "main.h"
/**
 * *_strncpy - funtion that copy.
 * @dest : pointer
 * @src : pointer
 * @n : int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
