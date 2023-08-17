#include "lists.h"
/**
 * sum_dlistint - The function that returns the sum of all the data (n)
 *                of a dlistint_t linked list
 * @head: The pointer to the head
 * Return: Sum of all elements, if successful
 *         0, if head == NULL
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
