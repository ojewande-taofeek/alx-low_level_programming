#include "lists.h"

/**
 * listint_len - The function that the number of elements
 * in a listint_t
 * @h: The pointer to the node
 * Return: Number of nodes(counter), if successful
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (-1);
	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
