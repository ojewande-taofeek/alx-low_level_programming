#include "lists.h"

/**
 * delete_nodeint_at_index - The function that deletes the node at index
 *                          of a listint_t linked list
 * @head: The pointer to the head
 * @index: The position of the node to be deleted
 * Return: 1, if successful
 *         -1, if otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *t_ptr, *tmp_ptr;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp_ptr = (*head);
		(*head) = (*head)->next;
		free(tmp_ptr);
		return (1);
	}
	t_ptr = (*head);
	tmp_ptr = (*head);
	while (t_ptr != NULL && counter < index)
	{
		tmp_ptr = t_ptr;
		t_ptr = t_ptr->next;
		counter++;
	}
	if (counter == index)
	{
		tmp_ptr->next = t_ptr->next;
		free(t_ptr);
		return (1);
	}
	free(tmp_ptr);
	free(t_ptr);
	return (-1);
}
