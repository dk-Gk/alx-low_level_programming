#include "main.h"
/**
* wildcmp - compares 2 strings
* @s1: pointer
* @s2: pointer
* Return: result
*/
int wildcmp(char *s1, char *s2)
{
if (!(*s1))
{
if (!(*s2))
return (1);
if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
}

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
return (0);
}
