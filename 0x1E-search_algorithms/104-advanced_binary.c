#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 * Return: first index or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
  if (!array || size == 0)
    return (-1);

  return (binarySearch(array, 0, size - 1, value));
}

/**
 * binarySearch - binary search
 * @arr: array to search the value in
 * @left: the lowest index
 * @right: the highest index
 * @value: value
 * Return: the first index or -1 if not found
 */
int binarySearch(int arr[], size_t left, size_t right, int value)
{
if (array == NULL)
return (-1);

if (left <= right)
{
printf("Searching in array:");
for (size_t i = left; i <= right; i++)
{
printf(" %i", array[i]);
if (i != right)
printf(",");
}
printf("\n");

int mid = ((right + left) / 2);

if (value > array[mid])
return (binarySearch(array, mid + 1, right, value));
if (value < array[mid])
return (binarySearch(array, left, mid - 1, value));
else
{
if (value == array[mid - 1])
return (binarySearch(array, left, mid, value));
else
return (mid);
}
}
return (-1);
}
