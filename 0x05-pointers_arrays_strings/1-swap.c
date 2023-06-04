#include "main.h"

/**
 * swap_int - A function that swaps values of two integers
 * @a: The first integer pointer
 * @b: The second integer pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int keep;

	keep = *a;
	*a = *b;
	*b = keep;
}
