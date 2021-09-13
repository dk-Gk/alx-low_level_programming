#include "main.h"
/**
 * *_strchr - find char in string
 * @s: pointer
 * @c: character
 * Return: *s or null if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
break;
}
else
{
return ('\0');
}
s++;
}
return (s);
}
