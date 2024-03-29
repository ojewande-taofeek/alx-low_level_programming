#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 *                            a new node at a given position
 * @h: The pointer to the head pointer
 * @idx: the index of the list where the new node
 *       should be added. Index starts at 0
 * @n: The data of a new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int node_num = 0;

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	current = *h;
	while (current)
	{
		if (node_num == idx)
		{
			if (idx == 0)
				return (add_dnodeint(h, n));
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev = new_node;
			new_node->prev->next = new_node;
			return (new_node);

		}
		current = current->next;
		node_num++;
	}
	return (NULL);
}
