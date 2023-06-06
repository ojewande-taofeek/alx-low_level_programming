#include "main.h"

/**
 * print_diagsums - The function prints the sum of the two diagonals of
 *                  a square matrix of integers
 * @a: The 2D array of integers
 * @size: The maximum columns of the array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int row, column, sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (column == row)
			{
				sum1 += *(a + (row * size) +column);
			}
		}
	}
	printf("%d, ", sum1);

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if ((row + column) == (size - 1))
				sum2 += *(a + (row * size) + column);
		}
	}
	printf("%d\n", sum2);
}
