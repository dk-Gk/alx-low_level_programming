#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
int length = 0;
char *ret;

if (str == NULL)
return (NULL);
while (*str++)
length++;
ret = malloc(sizeof(char) * (length + 1));
if (!ret)
return (NULL);
for (length++; length--;)
ret[length] = *--str;
return (ret);
}

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
p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
p->name = _strdup(name);
if (name && !p->name)
return (free(p), NULL);
p->age = age;
p->owner = _strdup(owner);
if (owner && !p->owner)
return (free(p->name), free(p), NULL);
return (p);
}
