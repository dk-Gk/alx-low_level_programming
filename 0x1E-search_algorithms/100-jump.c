#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array using jump
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index or -1
 */


int jump_search(int *array, size_t size, int value)
{
if (!array)
{
return (-1);
}
size_t step = sqrt(size);
size_t i = 0;
while (i < size)
{
printf("Value checked array");
printf("[%d] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}

else if (array[i] < value && value <= array[i + step])
{
size_t m = i + step;
printf("Value found between indexes [%d] and [%d]\n", i, m);
while (i <= m && i < size)
{
printf("Value checked array");
printf("[%d] = [%d]\n", i, array[i]);
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