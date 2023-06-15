#include "main.h"

/**
 * malloc_checked - The function allocates memory using malloc
 * @b: The bytes size
 * Return: Nothing
 *         status value of 98, if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		 exit (98);
	return (ptr);
}
