#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: head pointer
 * Return: data of head or 0 if empty
 */
int pop_listint(listint_t **head)
{
int x;
listint_t *del;
if (*head == NULL)
{
return (0);
}
del = *head;
x = (*head)->n;
*head = (*head)->next;
free(del);
return (x);
}
