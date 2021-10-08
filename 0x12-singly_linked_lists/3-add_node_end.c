#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: first node
 * @str: String
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n = malloc(sizeof(list_t)), *end = *head;
int i;
for (i = 0; str[i]; i++)
;
if (n)
{
n->str = strdup(str);
n->len = i;
n->next = NULL;
if (*head == NULL)
{
*head = n;
}
else
{
while (end->next)
end = end->next;
end->next = n;
}
return (*head);
}
return (NULL);
}
