#include "lists.h"

/**
 * insert_nodeint_at_index - The  function that inserts a new node at
 * a given position.
 * @head: The pointer to the head
 * @idx: The index of the list where the new node should be added
 * @n: integer for the new node
 * Return: The address of the new node, or NULL if it failed
 *         if it is not possible to add the new node at index idx, do
 *         not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *t_ptr, *tmp_ptr;
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	t_ptr = *head;
	while (t_ptr != NULL && counter < idx)
	{
		tmp_ptr = t_ptr;
		counter++;
		t_ptr = t_ptr->next;
	}
	if (counter == idx)
	{
		n_node->next = tmp_ptr->next;
		tmp_ptr->next = n_node;
		return (n_node);
	}
	free(n_node);
	return (NULL);
}
