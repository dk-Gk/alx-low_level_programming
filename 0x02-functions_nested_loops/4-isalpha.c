#include "main.h"
/**
 * _isalpha - check alphabets
 *@c: the number
 * Return: Always 0
 */
int test_isalpha(int c)
{
char b;
char d;
int i = 0;
for (d = 'A'; d <= 'Z'; d++)
{
for (b = 'a'; b <= 'z'; b++)
{
if (c == b || c == d)
{
i = 1;
}
}
}
return (i);
}
