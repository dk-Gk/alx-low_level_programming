#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints elements of array
 * @str: pointer value
 *@n: number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
printf("%d", *a);
if (i < n - 1)
{
printf(", ");
}
}
_putchar('\n');
}
