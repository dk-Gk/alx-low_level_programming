#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: a pointer to the prev allocated memory
 * @old_size: the size of allocated space for ptr 
 * @new_size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (!ptr)
{
ptr = malloc(new_size);
if (!ptr)
{
free(ptr);
return (NULL);
}
return (ptr);
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
