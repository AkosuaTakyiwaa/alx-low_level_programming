#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function creates two dimensional array of integer
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: a pointer to  created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int n, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		arr[n] = (int *) malloc(sizeof(int) * width);
		if (arr[n] == NULL)
		{
			free(arr);
			for (j = 0; j <= n; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (j = 0; j < width; j++)
		{
			arr[n][j] = 0;
		}
	}
	return (arr);
}
