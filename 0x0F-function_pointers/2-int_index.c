#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: the array
 * @size: size of an array
 * @cmp: Function pointer
 * Return: index of the first element if cmp not return 0 or -1 if false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
