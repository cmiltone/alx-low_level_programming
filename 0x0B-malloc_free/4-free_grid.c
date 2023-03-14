#include <stdlib.h>

/**
 * free_grid - frees memory from 2d array
 * @grid: the 2d array
 * @height: int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
