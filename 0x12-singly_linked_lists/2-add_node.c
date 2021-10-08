#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: first element
 * @str: string
 * Return: address of the new element or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n = malloc(sizeof(list_t));
int i;
if (n)
{
for (i = 0; str[i]; i++)
;
n->str = strdup(str);
n->len = i;
n->next = *head;
*head = n;
return (n);
}
return (NULL);
}
