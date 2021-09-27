#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intialize the struct
 * @d: pointer to my struct
 * @name: the name to be initialized
 * @age: the age to be intialized
 * @owner: the owner to be initialized
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
