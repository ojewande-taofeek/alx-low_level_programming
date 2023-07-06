#include "lists.h"

/**
 * free_listint2 - The function that frees a listint_t list.
 * @head: The pointer to the head
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_ptr = (*head);

	if (head == NULL || (*head) == NULL)
		return;
	while ((*head) != NULL)
	{
		tmp_ptr = (*head)->next;
		free(*head);
		(*head) = tmp_ptr;
	}
	*head = NULL;
}
