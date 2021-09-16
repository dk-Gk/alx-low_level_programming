#include "main.h"
/**
 * _pow_recursion - calculate power of an integer
 * @x: number to be raised
 * @y: the power
 * Return: result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
x *= _pow_recursion(x, y - 1);
}
return (x);
}
