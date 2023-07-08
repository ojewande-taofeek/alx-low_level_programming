#include "main.h"

/**
 * get_bit - The function that returns the value of a bit at a given index.
 * @n: the decimal number
 * @index: The index starting from 0 of the bit you want to get
 * Return: The value of the bit if successful
 *         -1, if error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index < (sizeof(unsigned long int) * 8))
	{
		mask = 1UL << index;
		if (n & mask)
			return (1);
		else
			return (0);
	}
	else
		return (-1);
}
