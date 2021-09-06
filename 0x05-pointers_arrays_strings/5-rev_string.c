#include "main.h"
/**
 * rev_string - function that prints a string in revers
 * @s: pointer value
 * Return: nothing
 */
void rev_string(char *s)
{
int c = 0;
while (s[c])
{
c = c + 1;
}
c--;
for (; c >= 0; c--)
{
s[c];
}
