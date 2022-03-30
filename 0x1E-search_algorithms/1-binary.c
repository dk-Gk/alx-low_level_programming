#include "search_algos.h"

/**
 * binary_search - search an element using binary
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value:  the value to search for
 * Return:  the index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
if (!array)
{
return (-1);
}
size_t left = 0;
int mid;
while (left < size)
{
mid = ((size + left) / 2);

printf("Searching in array: ");

for (size_t i = left; i < size; i++)
{
if (i < size - 1)
{
printf("%d,", i);
}
else
{
printf("%d \n", i);
}
}
if (array[mid] == value)
{
return (mid);
}
else if (array[mid] > value)
{
size = mid - 1;
}
else
{
left = mid + 1;
}
}
return (-1);
}
