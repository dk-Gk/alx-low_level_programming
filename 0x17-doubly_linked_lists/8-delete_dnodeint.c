#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * @head: head
 * @index:  the index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	size_t count = 0;

	if (!*head)
	{
		return (-1);
	}
	while (temp)
	{
	      temp = curr_node->next;
	      count++;
	}
	if (count < index + 1)
	{
		return (-1);
	}
	temp = *head;
	if (!index)
	{
		*head = temp->next;
		if (temp->next)
		{
			temp->next->prev = NULL;
		}
		temp->next = NULL;
		free(temp);
		return (1);
	}
	while (index--)
	{
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
