#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @index: the index of the node
 * @head: head
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
temp = head;
while (temp && index)
{
temp = temp->next;
index--;
}
return (temp);
}
