#include "main.h"
/**
 * _islower - check alphabet case
 *@c: the character to be checked
 * Return: 1 if true and 0 if not
 */
int _islower(int c)
{
char b;
int i = 0;
for (b = 'a'; b <= 'z'; b++)
{
if (c == b)
{
i = 1;
}
}
return (i);
}
