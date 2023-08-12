#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - fxn to allocate memory using malloc
 * @b: nom. of bytes for allocation
 *
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}	
