#include "main.h"

/**
 * alloc_grid - Function returns a pointer to a 2 dimensinal array of integers
 * @width: The size of column of the 2-D array
 * @height: The size of row of the 2-D array
 * Return: NULL, on failure or if width && height <= 0
 *         2-D array of 0s
 */

int **alloc_grid(int width, int height)
{
	int idx, wdx;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **) malloc(height * sizeof(int *));
	if (matrix != NULL)
	{
		for (idx = 0; idx < height; idx++)
			matrix[idx] = (int *) malloc(width * sizeof(int));
	}
	for (idx = 0; idx < height; idx++)
	{
		for (wdx = 0; wdx < width; wdx++)
			matrix[idx][wdx] = 0;
	}
	return (matrix);
}
