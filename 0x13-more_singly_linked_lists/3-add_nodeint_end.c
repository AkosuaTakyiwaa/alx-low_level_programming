#include "lists.h"                                                               
#include <stdio.h>                                                               
#include <stdlib.h>                                                              
                                                                                 
/**                                                                              
 * add_nodeint_end - a function that adds a new node at the end of listint_t   
 *@head : a pointer to a pointer to head node of the linked list                 
 *@n : argument or data to be added to new node                                  
 *                                                                               
 * Return: the address of the new element, or NULL if it fails                   
 */                                                                              
listint_t *add_nodeint_end(listint_t **head, const int n)                  
{                                                                                
        listint_t *newNode, *update;                                                      
                                                                                 
        newNode = malloc(sizeof(listint_t));                                     
        if (newNode == NULL)                                                     
        {                                                                        
                return (NULL);                                                   
        }                                                                        
                                                                                 
        newNode->n = n                                                           
        newNode->next = NULL;                                                   
        update = *head;

	if (*head == NULL) 
	{
		*head = newNode;
	}

	else
	{
		while (update->next != NULL)
			update = update->next;
	}

	return (newNode);
}
	

	
	



                                                                                 
        return (newNode);                                                        
}                                                                                
