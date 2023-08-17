#include "lists.h"

/**
 * dlistint_len - The function returns the number of elements of
 *                a dlistint_t list
 * @h: The pointer to the head of the doubly linked list
 * Return: The number of the elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}
	return (num);
}
