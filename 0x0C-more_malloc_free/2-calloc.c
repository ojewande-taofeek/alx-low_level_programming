#include "main.h"

/**
 * _calloc - The function allocates memory for an array using malloc
 * @nmemb: The number of elements of the array
 * @size: The bytes of each element
 * Return: NULL, if nmemb || size == 0
 *         NULL, if malloc fails
 *         array, if successful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb);
	return (ptr);
}
