#include "lists.h"

/**
 * add_node - The function adds a new node at the beginning of a list_t list
 * @head: The pointer to pointer head
 * @str: The string constant pointer
 * Return: The new node(ptr), if successful
 *          NULL, otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (ptr);
	}
	ptr->len = strlen(str);
	ptr->next = (*head);
	(*head = ptr);
	return (ptr);
}
