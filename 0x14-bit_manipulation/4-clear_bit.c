#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: The pointer to an integer UL
 * @index: The index starting from 0 of the bit you want to set
 * Return: 1, if successful
 *         -1, if otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index < (sizeof(unsigned long int) * 8))
	{
		mask = 1UL << index;
		*n &= ~mask;
		return (1);
	}
	return (-1);
}
