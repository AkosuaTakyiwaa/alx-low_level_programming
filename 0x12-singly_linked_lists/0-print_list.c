#include "lists.h"
#include <stdio.h>

/**
 * print_list -a function which prints all the elements of a linked list
 * @h: the pointer to the list_t list to print
 *
 * Return: the number of nodes which is printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		z++;
	}

	return (n);
}
