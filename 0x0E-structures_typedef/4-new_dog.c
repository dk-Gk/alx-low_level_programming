#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: The dog owner's name
 * Return: NULL if the function fails.
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
