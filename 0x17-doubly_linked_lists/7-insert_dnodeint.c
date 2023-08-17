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
	if (*h == NULL || idx == 0)
	{
		new_node->next = *h;
		if (idx == 0 && *h != NULL)
			current->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		if (i == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	if ((i == idx - 1)  && current->next == NULL)
	{
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
		}
	return (NULL);
}
