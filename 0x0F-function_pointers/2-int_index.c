#include "function_pointers.h"

/**
 * int_index - fxn that searches for an integer
 * @size: the size of array
 * @cmp: a pointer to comparing function
 * @array: the array to search
 *
 * Return: index of first element for which
 * cmp fxn does not return 0, or -1 if no element matches
 * or for which size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array && cmp)
	{
		for (y = 0; y < size; y++)
		{
			if (cmp(array[y]) != 0)
				return (y);
		}
	}

	return (-1);
}
