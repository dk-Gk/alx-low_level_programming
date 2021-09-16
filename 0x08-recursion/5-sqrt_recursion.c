#include "main.h"
/**
 * _sqrt_recursion - calculate square root of an integer
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
if (n == 1)
{
return (1);
}
else
{
return (_sqrt_recursion(n));
}
