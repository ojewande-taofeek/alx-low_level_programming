#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head pointer
 * @str: the str contain the node data
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
