#include "lists.h"
/**
 * sum_listint - calculate the sum of all the data (n) of a linkedlist
 * @head: pointer to head
 * Return: return the result or 0 if empty list
 */
int sum_listint(listint_t *head)
{
listint_t *suml;
int result = 0;
suml = head;
if (!head)
{
return (0);
}
while (suml->next)
{
result += suml->n;
suml = suml->next;
}
result += suml->n;
return (result);
}
