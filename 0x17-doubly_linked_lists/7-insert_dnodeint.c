#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts new node at index
 * @idx: the index of the list to be added
 * @n: element
 * @h: head
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		temp = temp->next;
		if (!temp)
		{
			return (NULL);
		}
		idx--;
	}
	if (!temp->next)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
