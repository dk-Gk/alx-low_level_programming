#include "main.h"
/**
 * _puts - function that prints a string in revers
 * @s: pointer value
 * Return: nothing
 */
void print_rev(char *s)
{
int c = 0;
while (s[c])
{
c = c + 1;
}
c--;
for (; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
