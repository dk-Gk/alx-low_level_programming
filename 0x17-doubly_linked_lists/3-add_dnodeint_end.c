#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head
 * @n: element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *new;
temp = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL || head == NULL)
{
return (NULL);
}

if (!*head)
{
new->n = n;
new->next = NULL;
new->prev = NULL;
*head = new;
return (new);
}
while (temp->next != NULL)
{
temp = temp->next;
}
new->n = n;
temp->next = new;
new->next = NULL;
new->prev = temp;
return (new);

}
