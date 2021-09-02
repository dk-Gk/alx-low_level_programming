#include "main.h"
/**
 * _isupper - check alphabet case
 *@c: the character to be checked
 * Return: 1 if true and 0 if not
 */
int _isupper(int c)
{
char b;
int i = 0;
for (b = 'A'; b <= 'Z'; b++)
{
if (c == b)
{
i = 1;
}
}
return (i);
}
