#include "main.h"
/**
 **_strspn - length of prefix
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, count = 0, j;
while (accept[i])
{
for (j = 0; s[j]; j++)
{
if (accept[i] == s[j])
{
count++;
break;
}
}
i++;
j = 0;
}
return (count);
}
