#include "lists.h"

/**
 * list_len - The function that returns the number of elements of a list_t
 * @h: Pointer to the head node
 * Return: the number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (-1);
	ptr = h;

	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
