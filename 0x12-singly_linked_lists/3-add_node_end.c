#include "lists.h"

/**
 * add_node_end - The function adds a new node at the end of a list_t list
 * @head: The pointer to pointer head
 * @str: The string constant pointer
 * Return: The new_node(ptr), if successful
 *         NULL, if otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *ptr_end;

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr_end = (*head);

	if ((*head) == NULL)
	{
		(*head) = ptr;
		return (ptr);
	}
	while (ptr_end->next != NULL)
		ptr_end = ptr_end->next;
	ptr_end->next = ptr;
	return (ptr);
}
