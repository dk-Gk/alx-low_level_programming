#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print numbers
 * @n: number of arguments
 * @separator: pointer
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list l;
va_start(l, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(l, int));
if (i < n - 1 && separator)
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
