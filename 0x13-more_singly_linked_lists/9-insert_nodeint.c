#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to head
 * @idx: index to insert the node
 * @n: the data of the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp;
unsigned int i = 0;
temp = *head;
new = malloc(sizeof(listint_t));
new->n = n;
if (!head)
{
return (NULL);
}
if (idx == 0)
{
if (temp == NULL)
{
temp = new;
}
else
{
new->next = temp;
temp = new;
}
}
while (i != idx)
{
temp = temp->next;
i++;
}
new->next = temp->next;
temp->next = new;
return (new);
}
