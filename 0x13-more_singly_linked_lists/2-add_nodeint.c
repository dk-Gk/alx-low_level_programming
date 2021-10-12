#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning
 * @head: head pointer
 * @n: element  of the node
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new)
{
if (*head == NULL)
{
new->n = n;
new->next = NULL;
*head = new;
return (new);
}
else
{
new->next = *head;
new->n = n;
*head = new;
return (new);
}
}
return (NULL);
}
