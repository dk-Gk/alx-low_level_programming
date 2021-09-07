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
for (i = 0; i <= c; i++)
{
if(i % 2 == 0)
{
_putchar(str[i]);
}
_putchar('\n');
}
