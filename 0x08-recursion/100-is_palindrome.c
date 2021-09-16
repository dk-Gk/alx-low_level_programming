#include "main.h"
int check(char *s, int i, int l);
int s_len(char *s);
/**
* is_palindrome - check palindrome
* @s: string to be checked
* Return: 1 if true or 0 false
*/
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (check(s, 0, s_len(s)));
}

/**
* s_len - length of a string
* @s: pointer
* Return: length
*/
int s_len(char *s)
{
if (*s == '\0')
return (0);
return (1 + s_len(s + 1));
}

/**
* check - checks the characters recursively for palindrome
* @s: pointer
* @i: number
* @j: length of the string
* Return: 1 if palindrome, 0 if not
*/
int check(char *s, int i, int j)
{
if (*(s + i) != *(s + j - 1))
return (0);
if (i >= j)
return (1);
return (check(s, i + 1, j - 1));
}
