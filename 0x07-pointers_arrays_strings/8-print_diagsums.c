#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: pointer to an integer
 * @size: int type
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int s;
int d1 = 0;
int d2 = 0;
for (s = 0; s < size; s++)
d1 = d1 + a[(size + 1) * s];
for (s = 1; s < size + 1; s++)
d2 = d2 + a[(size - 1) * s];
printf("%d, %d\n", d1, d2);
}
