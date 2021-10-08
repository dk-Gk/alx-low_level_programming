#include "lists.h"

/**
 * list_len - calculate number of elements in linked list
 * @h: pointer to the struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t l = 0;
while (h)
h = h->next, l++;
return (l);
}
