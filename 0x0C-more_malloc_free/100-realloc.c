#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - fxn that reallocates memory block using malloc and free
 * @old_size: the size of allocated memory for ptr
 * @new_size: the new size of new memory block
 * @ptr: the pointer to previsouly allocated memory by malloc
 *
 * Return: pointer to new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			ptr1[y] = old_ptr[y];
	}

	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			ptr1[y] = old_ptr[y];
	}

	free(ptr);
	return (ptr1);
}
