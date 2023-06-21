#include "function_pointers.h"

/**
 * int_index - The function searches for an integer
 * @array: The array of integers
 * @size: The size of the array of integers
 * @cmp: A function pointer to be used to comapre values
 * Return: The index of elements of value comapred, if successful
 *          -1, if element matches, size <= 0 or array || cmp == NULL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) > 0)
			return (idx);
	}
	return (-1);
}
