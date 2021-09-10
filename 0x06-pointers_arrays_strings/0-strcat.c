#include "main.h"
/**
 * _strcat - function that prints a string in revers
 * @dest: pointer value
 * @src: pointer value
 * Return: the concatenated strings
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for(i=0; dest[i]!='\0'; ++i);
for(j=0; src[j]!='\0'; ++j, ++i)
{
str1[i]=str2[j];
}
str1[i]='\0';
return (*dest);
}
