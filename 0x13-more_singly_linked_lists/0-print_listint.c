#include "lists.h"

/**
 * print_listint - a function which prints all elements of a linked list
 * @h: a pointer to the head of the listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
