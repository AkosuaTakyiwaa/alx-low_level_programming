#include <stdlib.h>
#include "main.h"

/**
 * *create_array - to create an array of characters,
 * initializes with specific char
 * @size: the size of array to create
 * @c: character to initialize the array c
 *
 * Return: a pointer to the array (Success),else NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (n < size)
	{
		*(p + n) = c;
		n++;
	}

	*(p + n) = '\0';

	return (p);
}
