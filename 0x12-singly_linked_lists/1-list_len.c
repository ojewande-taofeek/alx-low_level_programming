#include "lists.h"

/**
 * list_len - function that returns the number
 *            of elements in a linked list_t list
 * @h: the pointer to the head
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t n;

	n = 0;
	current = h;
	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
