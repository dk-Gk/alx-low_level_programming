#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: pointer value
 * Return: nothing
 */
void puts2(char *str)
{
int c = 0, i;
while (str[c])
{
c = c + 1;
}
_putchar(str[0]);
for (i = 1; i <= c - 2; i++)
{
_putchar(str[i + 2]);
}
_putchar('\n');
}
