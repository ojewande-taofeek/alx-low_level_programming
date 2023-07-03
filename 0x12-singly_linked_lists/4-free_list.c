#include "lists.h"

/**
 * free_list - The function frees a list_t list
 * @head: The pointer to the node head
 * Return: Always nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
}
