#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array using jump
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index or -1
 */


int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size);
size_t i = 0;
size_t m;
if (!array)
{
return (-1);
}
while (i < size)
{
printf("Value checked array");
printf("[%li] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}

else if (array[i] < value && value <= array[i + step])
{
m = i + step;
printf("Value found between indexes [%li] and [%li]\n", i, m);
while (i <= m && i < size)
{
printf("Value checked array");
printf("[%li] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}
}

else if (array[i] < value && value > array[i + step])
{
i += step;
}

}
return (-1);
}
