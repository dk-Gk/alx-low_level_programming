#include "main.h"
#include<stdio.h>
/**
 * _strchr - find char in string
 * @s: pointer
 * @c: character
 * Return: *s or null if not found
 */
char *_strchr(char *s, char c)
{
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
