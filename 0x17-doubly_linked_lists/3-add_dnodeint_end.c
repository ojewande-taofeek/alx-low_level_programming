#include "lists.h"
/**
 * add_dnodeint_end - Write a function that adds a new node at the
 *                    end of a dlistint_t list.
 * @head: The pointer to the head pointer
 * @n: The integer to be stored in the new node
 * Return: A new node, if successful
 *         NULL, if otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node;

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
	while (current->next != NULL)
		current = current->next;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
