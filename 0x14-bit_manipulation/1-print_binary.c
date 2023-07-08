#include "main.h"

/**
 * print_binary - The  function that prints the
 *                binary representation of a number
 * @n: The number to convert to binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask, idx;
	int l_zeros = 1;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (idx = 0; idx < (sizeof(unsigned long int) * 8); idx++)
	{
		if (n & mask)
		{
			l_zeros = 0;
			_putchar('1');
		}
		else if (!l_zeros)
			_putchar('0');
		n <<= 1;
	}
}
