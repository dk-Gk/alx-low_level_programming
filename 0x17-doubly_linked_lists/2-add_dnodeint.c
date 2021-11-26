#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head
 * @n: element to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
if (*head)
{
(*head)->prev = new;
}
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
return (new);
}
