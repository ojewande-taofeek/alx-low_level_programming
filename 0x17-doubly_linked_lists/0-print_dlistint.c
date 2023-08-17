#include "lists.h"

/**
 * print_dlistint - The function prints  all the elements of a dlistint_t list
 * @h: The pointer to the head of the doubly linked list
 * Return: The number of the elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		num++;
		current = current->next;
	}
	return (num);
}
