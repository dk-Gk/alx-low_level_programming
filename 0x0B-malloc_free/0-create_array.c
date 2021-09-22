#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: the size
 * @c: the character
 * Return: NULL if size is 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
{
return(NULL);
}
p = malloc(size * sizeof(*p));
for (i = 0; i < size; i++)
{
p[i] = c;
}
return(p);
}
