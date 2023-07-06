#include "lists.h"

/**
 * print_list - The function prints all the elements of a list_t list
 * Description: If str == NULL, print [0] (nil). Allowed to use printf
 * @h: Pointer to the head node
 * Return: the number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
		counter++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
	       ptr = ptr->next;
	}
	return (counter);
}
