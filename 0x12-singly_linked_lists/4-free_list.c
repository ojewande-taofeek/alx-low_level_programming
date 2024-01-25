#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: the pointer to the head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = current->next;
		free(current->str);
		free(current);
	}
}
