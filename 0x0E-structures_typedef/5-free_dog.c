#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct.
 * @d: Pointer to the struct.
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
