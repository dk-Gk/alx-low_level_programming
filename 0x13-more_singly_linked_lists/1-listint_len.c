#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - return num of elements
 * @h - head pointer
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
