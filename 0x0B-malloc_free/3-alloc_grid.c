#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a 2d array of integer
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **p;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p = malloc(height * sizeof(*p));
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(**p));
if (p[i] == NULL)
{
for (i--; i >= 0; i--)
free(p[i]);
free(p);
return (NULL);
}
}
for (k = 0; k < width; k++)
{
for (j = 0; j < height; j++)
{
p[k][j] = 0;
}
}
if (!p)
{
return (NULL);
}
return (p);
}
