#include "main.h"

/**
 * flip_bits - The function that returns the number of bits you would need
 *              to flip to get from one number to another
 * @n: The higher integer
 * @m: The lower integer
 * Return: The number of bits flipped (counter)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int idx, mask, xor = n ^ m;

	for ((idx = (sizeof(unsigned long int) * 8)); idx > 0; idx--)
	{
		mask = xor >> idx;
		if (mask & 1)
			counter++;
	}
	return (counter);
}
