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
	dlistint_t *current = *head, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (1);
	if (index == 0)
	{
		tmp = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		*head = tmp;
		return (1);
	}
	while (current->next != NULL)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			current->next = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	if ( (i == index - 1 || i == index) && current->next == NULL)
	{
		if (i == index - 1)
			current->prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
