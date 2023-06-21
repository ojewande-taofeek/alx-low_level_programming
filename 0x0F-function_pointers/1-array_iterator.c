#include "function_pointers.h"

/**
 * array_iterator - The function executes a funtion given as a prameter
 *                   on each element of an array
 * @array: A pointer to an array of integers
 * @size: The size of the array of integers
 * @action: The pointer to the function, one needs to use
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (idx = 0; idx < size; idx++)
		action(array[idx]);
}
