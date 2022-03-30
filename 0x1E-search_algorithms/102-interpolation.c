#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index the value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
  size_t lo = 0, hi = size - 1, mid = 0, pos = 0;

if (!array || size == 0)
return (-1);

pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
(value - array[lo]));
if (pos > size - 1)
printf("Value checked array[%li] is out of range\n", pos);

while ((array[hi] != array[lo]) && (value >= array[lo]) &&
(value <= array[hi]))
{
mid = lo + ((value - array[lo]) * (high - lo) /
(array[hi] - array[lo]));

printf("Value checked array[%li] = [%d]\n", mid, array[mid]);
if (array[mid] < value)
lo = mid + 1;
else if (value < array[mid])
hi = mid - 1;
else
return (mid);
}
if (value == array[lo])
return (lo);
return (-1);
}
