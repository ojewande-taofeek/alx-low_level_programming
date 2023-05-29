#include "main.h"

/**
 * swap_int - The function swaps the values of two integers
 * @a: The first pointer to an int
 * @b: The second pointer to an int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c; /* a temporary variable */

	c = *a;
	*a = *b;
	*b = c;
}
