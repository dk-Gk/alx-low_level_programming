#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check the code
 * b - size
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (!p)
{
exit(98);
}
return (p);
}
