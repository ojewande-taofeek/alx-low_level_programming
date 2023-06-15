#include "main.h"

/**
 * array_range - The function creates an array of integers
 * @min: The minimum intger
 * @max: The maximum integer
 * Return: An array of integer, if successful
 *         NULL, if min > max
 *         NULL, if malloc fails
 */

int *array_range(int min, int max)
{
	int idx;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (idx = 0; min <= max; idx++, min++)
	{
		if (idx == 0)
			ptr[idx] = min;
		else if (min == max)
			ptr[idx] = max;
		else
			ptr[idx] = min;
	}
	return (ptr);
}
