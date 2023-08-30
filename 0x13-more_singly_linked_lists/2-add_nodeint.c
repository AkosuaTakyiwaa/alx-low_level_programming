#include <lists.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of listint_t
 *@head : a pointer to a pointer to head node of the linked list
 *@n : argument or date to be added to new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL) 
	{
		return (NULL);
	}

	newNode->n = n
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
