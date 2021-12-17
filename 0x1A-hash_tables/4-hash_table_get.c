#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the hash table.
 * @ht: Hash table.
 * @key: Key.
 *
 * Return: The value if works, NULL if doesn't.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *temp;
if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
i = key_index((const unsigned char *)key, ht->size);
temp = ht->array[i];
if (temp == NULL)
{
return (NULL);
}
while (strcmp(temp->key, key) && temp != NULL)
{
temp = temp->next;
}
if (temp == NULL)
{
return (NULL);
}
else
return (temp->value);
}
