#include "hash_tables.h"

/**
 * hash_table_delete - Delete the hash table.
 * @ht: Hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *temp;
unsigned long int i;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
while (ht->array[i] != NULL)
{
temp = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = temp;
}
}
}
free(ht->array);
free(ht);
}
