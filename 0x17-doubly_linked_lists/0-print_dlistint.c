#include "lists.h"

/**
 * print_dlistint - prints all the elements 
 * @h: header
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;
	temp = h;
	while (temp->next != NULL)
	{
		count++;
		printf("%i\n\n",temp->n);
		temp = temp->next;
	}
	printf("%i\n\n",temp->n);
	count++;
	return (count);
}
