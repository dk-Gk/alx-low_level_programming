#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
p = malloc(sizeof(p));
if(p == NULL)
{
return (NULL);
}
p -> name = name;
p -> age = age;
p -> owner = owner;
return (p);
}
