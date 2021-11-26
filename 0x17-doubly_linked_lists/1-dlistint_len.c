#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: header
 * Return: returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;
	temp = h;
	if (h == NULL)
	{
		printf("%s", "Empty list");
	}
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	count++;
	return (count);
}
