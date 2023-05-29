#include <stdio.h>

/**
 * print_array - The function prints n elements of anarray folowed bya new line
 * @a: The pointer  to an array
 * @n: The number of elements to be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int idx = 0;

	for (; idx < n; idx++)
	{
		printf("%d", a[idx]);
		if (idx < (n - 1))
			printf(", ");
		else
			printf("\n");
	}
}
