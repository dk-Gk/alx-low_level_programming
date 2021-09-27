#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a struct
 * @d: pointer of the struct
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d->name == NULL)
{
printf("Name: (nil) \n");
}
if (d -> age < 0)
{
printf("Age: (nil) \n");
}
if (d -> owner == NULL)
{
printf("Owner: (nil) \n");
}
if (d -> name != NULL)
{
printf("Name: %s\n", d -> name);
}
if (d -> age > 0)
{
printf("Age: %f\n", d -> age);
}
if (d -> owner != NULL)
{
printf("Owner: %s\n", d -> owner);
}
}
