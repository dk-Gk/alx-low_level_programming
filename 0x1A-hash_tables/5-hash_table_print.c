#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table.
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *temp;
unsigned long int i, c = 0;

if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
if (temp != NULL)
{
while (temp != NULL)
{
if (c == 1)
{
printf(", ");
}
printf("'%s': '%s'", temp->key, temp->value);
c = 1;
temp = temp->next;
}
}
}
printf("}\n");
}
