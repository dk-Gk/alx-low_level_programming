#include "main.h"
/**
 * *_strchr - find char in string
 * @s: pointer
 * @c: character
 * Return: *s or null if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
return (!c ? s : NULL);
}
