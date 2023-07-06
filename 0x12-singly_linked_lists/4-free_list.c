#include "lists.h"

/**
 * free_list - The function frees a list_t list
 * @head: The pointer to the node head
 * Return: Always nothing
 */

void free_list(list_t *head)
{
	list_t *tmp_ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp_ptr = head;
		head = head->next;
		free(tmp_ptr->str);
		free(tmp_ptr);
	}
}
