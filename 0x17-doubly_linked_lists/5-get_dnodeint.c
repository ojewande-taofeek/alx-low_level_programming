#include "lists.h"
/**
 * get_dnodeint_at_index - The function that returns the nth node of
 *                         a dlistint_t linked list
 * @head: The pointer to the head
 * @index: The index of the node to return
 * Return: current node, if successful
 *         NULL, if otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (index == i)
		return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
