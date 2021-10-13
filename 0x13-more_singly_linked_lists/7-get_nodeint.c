#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head
 * @index: index of the node
 * Return: the nth node or NULL if doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp;
while (temp && i < index)
{
	temp = temp->next;
	i++;
}

return (temp ? temp : NULL);
}
