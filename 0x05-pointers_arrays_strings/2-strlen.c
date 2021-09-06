#include "main.h"
/**
 * _strlen - function that calculate the length of string
 * @s: pointer value
 * Return: lengtgh
 */
int _strlen(char *s);
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}
