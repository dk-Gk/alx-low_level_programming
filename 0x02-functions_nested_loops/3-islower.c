#include "main.h"
/**
 * _islower - check alphabet case
 *@c: the character to be checked
 * Return: 1 if true and 0 if not
 */
int _islower(int c)
{
char b;
int i;
for (b = 'a'; b <= 'z'; b++)
{
if (c == b || _putchar(c + '0') == b)
{
i = 0;
}
else
{
i = 1;
}
}
return (i);
}
