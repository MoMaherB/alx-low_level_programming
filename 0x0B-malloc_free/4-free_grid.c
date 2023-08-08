#include "main.h"

/**
 * free_grid - Frees the memory of
 * a 2D grid previously allocated by alloc_grid.
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
