#include "lists.h"
/**
 * free_listint - frees a list_t list
 * @head: head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *fr;
while (head)
{
fr = head;
head = head->next;
free(fr);
}
}
