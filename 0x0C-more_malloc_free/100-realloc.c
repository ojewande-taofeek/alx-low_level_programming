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
	ptr = malloc(old_size);
	if (ptr != NULL && new_size == old_size)
		return (ptr);
	if (ptr == NULL || new_size > old_size)
		ptr = malloc(new_size);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
