#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 * Return: the first index or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
size_t i = 1, newsize = 0;
int ret;

if (!array || !size)
return (-1);

while (i < size && array[i] < value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
i <<= 1;
}
newsize = (i >= size ? size : i + 1) - (i >> 1);
i >>= 1;
printf("Value found between indexes [%lu] and [%lu]\n",
i, i << 1 >= size ? size - 1 : i << 1);
ret = binary_search(array + i, newsize, value);
return (ret == -1 ? ret : ret + (int)i);
}

/**
 * binarySearch - binary search
 * @arr: array to search the value in
 * @left: the lowest index
 * @right: the highest index
 * @value: value
 * Return: the first index or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
size_t i = 0;
int *a = array;

if (!array)
return (-1);

while (size)
{
for (i = 0, printf("Searching in array: "); i < size; i++)
printf("%d%s", a[i], i + 1 == size ? "\n" : ", ");

i = (size - 1) / 2;
if (a[i] == value)
return ((a - array) + i);
else if (a[i] > value)
size = i;
else
{
a += (i + 1);
size -= (i + 1);
}
}
return (-1);
}
