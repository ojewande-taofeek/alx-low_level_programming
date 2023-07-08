#include "main.h"

/**
 * set_bit - The function that sets the value of a bit to 1 at a given index
 * @n: A pointer to the integer of UL
 * @index: The integer starting from 0 of the bit you want to set for iteration
 * Return: 1, if successful
 *         -1, if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index < (sizeof(unsigned long int) * 8))
	{
		mask = 1UL << index;
		if ((*n & mask) == 0)
		{
			*n |= mask;
			return (1);
		}
	}
	return (-1);
}
