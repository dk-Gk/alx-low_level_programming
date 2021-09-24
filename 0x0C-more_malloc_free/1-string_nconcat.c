#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: bytes of s2 to be concatenate
 * Return: pointer to the allocated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *t;
unsigned int size1, size2;
if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}
for (size1 = 0; s1[size1]; size1++)
;
for (size2 = 0; s2[size2]; size2++)
;
if (n >= size2)
{
n = size2;
}
t = malloc(sizeof(char) * (n + size1 + 1));
if (!t)
{
return (NULL);
}
for (size1 = 0; s1[size1]; size1++)
{
t[size1] = s1[size1];
}
for (size2 = 0; size2 < n; size2++)
{
t[size1 + size2] = s2[size2];
}
t[size1 + n] = '\0';
return (t);
}
