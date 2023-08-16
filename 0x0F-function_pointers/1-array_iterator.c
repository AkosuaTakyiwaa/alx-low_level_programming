#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - to execute function as a parameter
 * for each element of an array
 * @size: size of array
 * @action:a pointer to the function used
 * @array: the array to iterate over
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (!array || !action)
		return;

	for (y = 0; y < size; y++)
		action(array[y]);
}
