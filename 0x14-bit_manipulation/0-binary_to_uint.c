#include "main.h"

/**
 * binary_to_uint - The function that converts a binary number
 *                  to an unsigned int
 * @b: The pointer to a string constant of 0 and 1 chars
 * Return: 0, if b == NULL || 0 or b contains other
 *         characters other than 0 and 1
 *         base10, if successful
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int idx = 0, base10 = 0;

	if (!b)
		return (0);
	while (b[idx])
	{
		if (b[idx] == '1' || b[idx] == '0')
			base10 = (base10 * 2) + (b[idx] - '0');
		else
			return (0);
		idx++;
	}
	return (base10);
}
