#include "lists.h"
/**
 * free_listint - frees a list_t list
 * @head: head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
list_t *fr;
while (head)
{
fr = head;
head = head->next;
free(fr->n);
free(p);
}
}
