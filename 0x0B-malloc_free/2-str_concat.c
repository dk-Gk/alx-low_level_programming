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
while(*s1 != '\0')
{
size++;
s1++;
}
while(*s2 != '\0')
{
size2++;
s2++;
}
p = malloc(sizeof(*p) * size + size2);
for (i = 0; i <= size + size2; i++)
{
if(i < size && s1[i] != '\0')
{
p[i] = s1[i];
}
else
{
p[i] = s2[i];
}
}
return(p);
}
