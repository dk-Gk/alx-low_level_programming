#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
int *in, i;
if (min > max)
{
return (NULL);
}
in = malloc(sizeof(int) * (max - min + 1));
if (!in)
{
return (NULL);
}
for (i = 0; i < (max - min + 1); i++)
{
in[i] = min + i;
}
return (in);
}
