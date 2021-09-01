#include "main.h"
/**
 * _islower(int c) - check alphabet case
 * Return: 1 if true and 0 if not
 */
int _islower(int c)
{
char b;
int i;
for (b = 'a'; b <= 'z'; b++)
{
if (c == b)
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
