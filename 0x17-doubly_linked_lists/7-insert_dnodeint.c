#include "lists.h"

/**
 * insert_dnodeint_at_index - The function that inserts a
 *                            new node at a given position.
 * @h: The pointer to the head pointer
 * @idx: The index at which a new node is to be inserted
 * @n: The integer n to be stored in the new node
 * Return: A new node, if successful
 *         NULL, if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (i == idx)
		{
			new_node->prev = current->prev;
			current->prev = new_node;
			new_node->next = current;
			if (new_node->prev != NULL)
				new_node->prev->next = new_node;
			else
				*h = new_node;
			return (new_node);
		}
		i++;
		if (i == idx && current->next == NULL)
		{
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
	}
	return (NULL);
}
