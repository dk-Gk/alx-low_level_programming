#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a func on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: Funtion pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
