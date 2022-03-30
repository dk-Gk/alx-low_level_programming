#include "search_algos.h"
#include <math.h>

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 * Return: the first index or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
if (!array || size == 0)
return (-1);
if (array[0] == x)
return 0;

size_t i = 1;
while (i < size && array[i] <= value)
i = i*2;

return binarySearch(*array, i/2, min(i, size-1), value);
}

/**
 * binarySearch - binary search
 * @arr: array to search the value in
 * @left: the lowest index
 * @right: the highest index
 * @value: value
 * Return: the first index or -1 if not found
 */
int binarySearch(int arr[], size_t left, size_t right, int val)
{
if (arr == NULL)
return (-1);
if (right >= l)
{
size_t mid = left + (right - left)/2;

if (arr[mid] == val)
return mid;
if (arr[mid] > x)
return binarySearch(arr, l, mid-1, x);

return binarySearch(arr, mid+1, r, x);
}
return -1;
}
