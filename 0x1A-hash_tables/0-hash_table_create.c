#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates hash table
 * @size: size of an array
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new;
unsigned long int i;
new = malloc(sizeof(hash_table_t));
if (!new)
{
return (NULL);
}
new->size = size;
new->array = malloc(sizeof(hash_table_t *) * size);
if (new->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
new->array[i] = NULL;
}
return (new);
}
