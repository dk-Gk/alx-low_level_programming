#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: pointer to head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
long int a;
while (head)
{
a = head - head->next;
i++;
printf("[%p] %d\n", (void *)head, head->n);
if (a > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}

return (i);
}
