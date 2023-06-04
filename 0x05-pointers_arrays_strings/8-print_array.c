#include "main.h"
#include <stdlib.h>

/**
 * print_array - The function prints n elements of an array of integers,
 *                followed by a new line.
 * @a: The string constant pointer
 * @n: Number of elements of the array to be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int idx = 0;

	while (idx < n)
	{
		printf("%d", *(a + idx));
		if (idx < (n - 1))
			printf(", ");
		idx++;
	}
	printf("\n");
}
