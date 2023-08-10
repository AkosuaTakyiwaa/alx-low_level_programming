#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fnction that frees memory allocated for the grid
 * created by alloc_grid()
 * @height: height of the grid
 * @grid: grid to free
 *
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || height == 0)
		return;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
