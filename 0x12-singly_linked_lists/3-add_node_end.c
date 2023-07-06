#include "lists.h"

/**
 * _strlen - The function returns the length of a string
 * @s: The pointer to string constant
 * Return: length of the string (len)
 */

int _strlen(const char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}


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
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = _strlen(str);
	ptr->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = ptr;
		return (ptr);
	}
	ptr_end = (*head);
	while (ptr_end->next != NULL)
		ptr_end = ptr_end->next;
	ptr_end->next = ptr;
	return (ptr);
}
