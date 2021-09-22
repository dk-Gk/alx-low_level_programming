#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: NULL if str is NULL or a pointer to the string
 */
char *_strdup(char *str)
{
char *p;
char *j;
int i, c = 0;
if(str == NULL)
{
return(NULL);
}
for (i = 0; str[i] <= '\0'; i++)
{
*j = str[i];
j++;
c++;
}
p = malloc(sizeof(*j) * c);
return(p);
}
