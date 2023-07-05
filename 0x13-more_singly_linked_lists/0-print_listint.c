#include "lists.h"

/**
 * print_listint - The function that prints all the elements of a listint_t
 * @h: The pointer to the node
 * Return: Number of nodes(counter), if successful
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (counter);
}
