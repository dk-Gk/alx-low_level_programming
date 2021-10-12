#include "lists.h"
/**
 * free_listint2 - frees a list_t list
 * @head: head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *fr;
if (!head)
{
return;
}
while (*head)
{
fr = *head;
*head = (*head)->next;
free(fr);
}
*head = NULL;
}
