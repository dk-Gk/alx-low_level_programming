#include "main.h"
/**
 * puts_half - function that prints have of the string
 * @str: pointer value
 * Return: nothing
 */
void puts_half(char *str)
{
int c = 0, i;
while (str[c])
{
c = c + 1;
}
i = c / 2;
for (; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
