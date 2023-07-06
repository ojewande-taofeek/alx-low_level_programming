#include "lists.h"

/**
 * free_listint2 - The function that frees a listint_t list.
 * @head: The pointer to the head
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_ptr, *ptr = (*head);

	while (ptr != NULL)
	{
		tmp_ptr = ptr->next;
		free(ptr);
		ptr = tmp_ptr;
	}
	(*head) = NULL;
}
