#include "main.h"
/**
 * _strcmp - compare
 * @s1: The first char
 * @s2: the second char
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] && s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
