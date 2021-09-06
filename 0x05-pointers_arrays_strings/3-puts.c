#include "main.h"
/**
 * _puts - function that prints a string
 * @str: pointer value
 * Return: nothing
 */
void _puts(char *str)
{
int l = 0;
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
