#include "lists.h"

/**
 * add_nodeint - The function that adds a new node at the beginning of a
 * listint_t list.
 * @head: The pointer to the head node
 * @n: The constant integer
 * Return: New node (n_node), if successful
 *         NULL, if otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = (*head);
	if ((*head) == NULL)
		n_node->next = NULL;
	(*head) = n_node;
	return (n_node);
}
