#include "lists.h"
/**
 * delete_nodeint_at_index - Function that delete a nodo
 * @head: pointer to head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = *head;
listint_t *new;

if (!*head)
return (-1);
if (index == 0)
{
new = *head;
*head = (*head)->next;
free(temp);
return (1);
}
while (temp)
{
if (i  == index - 1)
{
new = temp->next;
temp->next = new->next;
free(new);
return (1);
}
temp = temp->next
i++;
}
return (-1);
}
