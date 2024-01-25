#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the pointer to the head
 * Return: the number of nodes, n
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		n++;
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;
	}
	return (n);
}
