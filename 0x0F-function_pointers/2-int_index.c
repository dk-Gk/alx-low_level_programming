#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: the array
 * @ size: size of an array
 * @cmp: Function pointer
 * Return: index of the first element if cmp not return 0 or -1 if false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, r = -1;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
r = cmp(array[i]);
if (r != 0)
{
r = i;
break;
}
}

return (r);
}