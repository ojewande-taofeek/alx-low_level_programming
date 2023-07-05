#include "lists.h"

/**
 * get_nodeint_at_index - The  function that returns the nth node of
 * a listint_t linked list
 * @head: The pointer to the head
 * @index: Idx of the node, starting at 0
 * Return: NULL, if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get_ptr = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (get_ptr != NULL)
	{
		if (counter == index)
			return (get_ptr);
		counter++;
		get_ptr = get_ptr->next;
	}
	return (NULL);
}
