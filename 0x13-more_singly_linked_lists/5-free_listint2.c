#include "lists.h"
/**
 * free_listint2 - frees a list_t list
 * @head: head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
list_t *fr;
while (*head)
{
fr = *head;
*head = (*head)->next;
free(p);
}
*head = NULL;
}
