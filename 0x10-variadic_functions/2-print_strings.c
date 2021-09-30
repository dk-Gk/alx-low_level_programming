#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings that are separated
 * @separator: string
 * @n: the number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list l;
unsigned int i;
char *p;
va_start(l, n);
for (i = 0; i < n; i++)
{
p = va_arg(l, char *);
if (p)
printf("%s", p);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(l);
printf("\n");
}
