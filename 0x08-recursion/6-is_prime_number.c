#include "main.h"
/**
 *pr - calculate prime
 *@x: number
 *@n: number
 *Return: result
 */
int pr(int x, int n)
{
if (n % x == 0)
{
return (0);
}
if (x == n / 2)
return (1);
return (primito(++x, n));
}
/**
 * is_prime_number - check number wether its prime or not
 * @n: number
 * Return: 1 if true or 0 if false
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (0);
}
else
{
return (pr(2, n));
}
