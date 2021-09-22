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
int i, c = 0;
if(str == NULL)
{
return(NULL);
}
for (i = 0; str[i] <= '\0'; i++)
{
*p = str[i];
c++;
p++;
}
p = malloc(sizeof(char) * c);
return(p);
}
