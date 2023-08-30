#include "lists.h"

/**
 * pop_listint - a fxn that deletes the head node of a linked list
 * @head: a pointer to a pointer of a head first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int len;

	if (!head || !*head)
		return (0);

	len = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (len);
}
