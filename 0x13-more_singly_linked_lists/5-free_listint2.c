#include "lists.h"

/**
 * free_listint2 - a function which frees listint-t list
 * *head: a pointer to a head of a node
 *
 *Return: void
 */
 void free_listint2(listint_t **head)
{
        listint_t *nice;
        nice = *head;

        while (*head != NULL)
        {
                *head = *head->next;
                free(nunn);
        }
}
