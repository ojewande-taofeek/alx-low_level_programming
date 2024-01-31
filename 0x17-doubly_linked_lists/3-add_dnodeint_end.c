#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new
 *                    node at the end of a dlistint_t list.
 * @head: Pointer to the head pointer
 * @n: The data of a new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
