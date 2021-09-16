#include "main.h"
/**
 * pow - calculate the pow
 *@i: number
 *@n: number
 * Return: result
 */
int pow(int i, int n)
{
if ((i * i) > n)
return (-1);
if (i * i == n)
return (i);
i++;
return (pow(i, n));
}
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
}
