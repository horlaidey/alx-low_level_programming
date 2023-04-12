#include "main.h"
/**
 * free_grid - free the allocated memory in grid
 * @grid: a two dimensional array pointer
 * @height: the specify height of the array
 *
 * Return: nothing
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
