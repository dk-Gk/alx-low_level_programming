#include "main.h"
/**
 * rev_string - function that prints a string in revers
 * @s: pointer value
 * Return: nothing
 */
void rev_string(char *s)
{
int a = 0;
int b = 0;
int c = 0;
while (s[a])
{
a = a + 1;
}
a = a - 1;
while (b < a + 1 / 2)
{
c = s[b];
s[b] = s[a];
s[a] = c;
a--;
b++;
}
}
