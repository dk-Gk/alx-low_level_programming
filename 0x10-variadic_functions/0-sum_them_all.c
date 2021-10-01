#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - claculate the sum of parametrs
 * @n: number of arguments
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list list;
va_start(list, n);
while (i != n)
{
sum = sum + va_arg(list, int);
i++;
}
va_end(list);
return (sum);
}
