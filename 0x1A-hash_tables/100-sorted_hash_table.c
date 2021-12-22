#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table.
 * @size: number of array slots to make the table.
 *
 * Return: pointer to the hash table created, or NULL if malloc failed.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
unsigned int i = 0;
shash_table_t *new = malloc(sizeof(shash_table_t));

if (new == NULL)
{
return (NULL);
}
new->size = size;
new->shead = NULL;
new->stail = NULL;
new->array = malloc(sizeof(shash_node_t *) * size);
if (new->array == NULL)
{
free(new);
return (NULL);
}
while (i < size)
{
new->array[i] = NULL;
i++;
}
return (new);
}

/**
 * set_spair - mallocs a key/value pair to the sorted hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: pointer to the new node.
 */
shash_node_t *set_spair(const char *key, const char *value)
{
shash_node_t *new = malloc(sizeof(shash_node_t));

if (new == NULL)
return (NULL);
new->key = malloc(strlen(key) + 1);
if (new->key == NULL)
return (NULL);
new->value = malloc(strlen(value) + 1);
if (new->value == NULL)
return (NULL);
strcpy(new->key, key);
strcpy(new->value, value);
return (new);
}
