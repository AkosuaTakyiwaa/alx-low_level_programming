#include "main.h"
#include <stdlib.h>

/**
 * *array_range - fxn that creates array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and number of elements
 *
 * Return: a pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		ptr[y] = min++;

	return (ptr);
}
