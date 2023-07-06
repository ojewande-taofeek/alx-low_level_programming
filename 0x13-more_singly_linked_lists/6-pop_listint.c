#include "lists.h"

/**
 * pop_listint - The function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: The pointer to head
 * Return: 0, if *head = NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *d_ptr;
	int data;

	if (*head == NULL)
		return (0);
	d_ptr = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(d_ptr);
	return (data);
}
