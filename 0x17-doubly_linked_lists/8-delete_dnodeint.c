#include "lists.h"

/**
 * delete_dnodeint_at_index - The function that deletes the node at index
 *                           index of a dlistint_t linked list.
 * @head: The pointer to the head pointer
 * @index: The index of element to be deleted
 * Return: 1, if successful
 *         -1, if otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL)
	{
		if (i == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (i == 0)
				*head = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
