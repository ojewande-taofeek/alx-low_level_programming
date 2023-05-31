#include "main.h"

/**
 * reverse_array - The function reverses the content of an array of integers
 * @a: The formal parameter for the array to be passed
 * @n: Maximum number of the array elements to reverse
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int idx, keep, half;

	half = n / 2;
	for (idx = 0; idx < half; idx++)
	{
		keep = a[n - 1 - idx];
		a[n - 1 - idx] = a[idx];
		a[idx] = keep;
	}
}
