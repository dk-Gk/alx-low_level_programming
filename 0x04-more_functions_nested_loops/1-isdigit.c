#include "main.h"
/**
 * _isdigit - check digit
 *@c: the number to be checked
 * Return: 1 if true and 0 if not
 */
int _isdigit(int c)
{
int i = 0;
int b;
for (b = 0; b <= 9; b++)
{
if (c == b)
{
i = 1;
break;
}
}
return (i);
}
