#include "lists.h"

/**
 * free_listint - a function which frees listint-t list
 * @head: a pointer to a head of a node
 *
 *Return: void
 */
 void free_listint(listint_t *head)
{
	listint_t *nunn;
	nunn = head;

	while (head != NULL)
	{	
		head = head->next;
		free(nunn);
	}
}
