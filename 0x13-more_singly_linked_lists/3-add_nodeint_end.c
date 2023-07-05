#include "lists.h"

/**
 * add_nodeint_end - The  function that adds a new node at the end
 * of a listint_t list.
 * @head: The pointer to head node
 * @n: integer
 * Return: New node (n_node) address, if successful
 *         NULL, if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t_node, *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);
	t_node = (*head);
	n_node->n = n;
	n_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = n_node;
		return (n_node);
	}
	while (t_node->next != NULL)
		t_node = t_node->next;
	t_node->next = n_node;
	return (n_node);
}
