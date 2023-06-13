#include "main.h"

/**
 * free_grid - The function frees a 2-D grid previously created by
 *             the alloc_grid function
 * @grid: A pointer to the alloc_grid function output
 * @height: The number of rows
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
		free(grid[idx]);
	free(grid);
}
