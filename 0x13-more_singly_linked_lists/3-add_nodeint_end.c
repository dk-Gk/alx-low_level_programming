#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add a new node at the beginning
 * @head: head pointer
 * @n: element  of the node
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
temp = *head;
new = malloc(sizeof(listint_t));
if (new)
{
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (new);
}
}
return (NULL);
}
