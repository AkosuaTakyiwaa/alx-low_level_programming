#include "main.h"
#include <stdlib.h>

/**
 * *_memoset  fxn that fills memory with constant byte
 * @s: the memory area to be filled
 * @b: the char to copy
 * @n: the  number of times b is to be copied
 *
 * Return: a pointer to memory area s
 */
char *_memoset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}

	return (s);
}

/**
 * *_calloc - fxn that allocates memory for an array
 * @nmemb: nom. of elements in the array
 * @size: the size of each element
 *
 * Return: a pointer to hte memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memoset(ptr, 0, nmemb * size);

	return (ptr);
}
