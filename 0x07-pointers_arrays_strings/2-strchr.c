#include "main.h"
/**
 * *_strchr - find char in string
 * @s: pointer
 * @c: character
 * Return: *s or null if not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
break;
}
else
{
return ('\0');
}
i++;
}
return (*(s + i));
}
