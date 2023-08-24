#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function which returns number of elements in linked list
 * @h: a pointer to list_t list
 *
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
