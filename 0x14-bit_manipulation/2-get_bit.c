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
	unsigned int rem, i = 0;

	if (n == 0)
		return (0);
	while ((n != 0) && (i <= index))
	{
		rem = n & 1;
		n >>= 1;
		if (i == index)
			return (rem);
		i++;
	}
	return (-1);
}
