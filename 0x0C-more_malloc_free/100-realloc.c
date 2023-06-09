#include "main.h"

/**
 * _realloc - The function reallocates a memory block using malloc and free
 * @ptr: The ptr to a memory location
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The size in bytes of the new memory block
 * Return: ptr, if succesful OR new_size == old_size
 *         NULL, if new_size == 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
