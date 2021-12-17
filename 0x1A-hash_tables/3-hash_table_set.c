#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: A pointer to the hash table.
 * @key: The key to add
 * @value: The value associated with key.
 * Return: 1 if it succeeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new, *current;
unsigned long int i;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}

i = key_index((const unsigned char *)key, ht->size);
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
return (0);
}

new->key = strdup((char *)key);
new->value = strdup((char *)value);
new->next = NULL;
if (ht->array[i] == NULL)
ht->array[i] = new;
else
{
current = ht->array[i];
if (strcmp(current->key, key) == 0)
{
new->next = current->next;
ht->array[i] = new;
free(current->key);
free(current->value);
free(current);
return (1);
}

while (current->next != NULL && strcmp(current->next->key, key) != 0)
{
current = current->next;
}
if (strcmp(current->key, key) == 0)
{
new->next = current->next->next;
free((current->next)->key);
free((current->next)->value);
free(current->next);
current->next = new;
}
else
{
new->next = ht->array[i];
ht->array[i] = new;
}
}
return (1);
}
