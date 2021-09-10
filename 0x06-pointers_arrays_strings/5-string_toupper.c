#include "main.h"
/**
 * string_toupper - string
 * @s: pointer
 * Return:s
 */
char *string_toupper(char *s)
{
int i = 0;
for (; s[i]; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
if (s[i] == j)
{
s[i] = s[i] - 32;
}
}
}
return (s);
}
