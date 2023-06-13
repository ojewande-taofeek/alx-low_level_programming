#include "main.h"

/**
 * create_array - The function creates an array of chars and initilizes it with
 *                a specific char
 * @size: The total char elements of the array
 * @c: The character
 * Return: An array of char elements
 */

char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);
	if (array != NULL)
	{
		for (idx = 0; idx < size; idx++)
			*(array + idx) = c;
	}

	return (array);
}
