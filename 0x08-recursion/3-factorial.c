#include "main.h"
/**
 * factorial - calculate factorial
 * @n: pointer
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
if (n != 0)
{
n *= factorial(n - 1);
}
}
return (n);
}
