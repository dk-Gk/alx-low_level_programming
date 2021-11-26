#include "lists.h"

/**
 * sum_dlistint - a function that returns a sum
 * @head: head
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
