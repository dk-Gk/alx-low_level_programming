#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - creates two concatenated strings
 * @s1: the first string
 * @s2: the second string
 * Return: NULL if size is 0 or a pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int size = 0, size2 = 0, i;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
size++;
}
for (i = 0; s2[i] != '\0'; i++)
{
size2++;
}
p = malloc(sizeof(char) * (size + (size2 + 1)));
if (!p)
{
return (NULL);
}
for (i = 0; i <= (size + (size2 + 1)); i++)
{
if (i < size && s1[i] != '\0')
{
p[i] = s1[i];
}
else
{
p[i] = s2[i];
}
}
return (p);
}
