#include "main.h"
/**
 * puts_half - function that prints have of the string
 * @str: pointer value
 * Return: nothing
 */
void puts_half(char *str)
{
int c = 0, i;
while (str[c] != '\0')
{
c = c + 1;
}
if (c + 1 % 2 != '0')
{
i = (c - 1) / 2;
}
else
{
i = (c / 2);
}
i++;
for (c = i - 1; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
