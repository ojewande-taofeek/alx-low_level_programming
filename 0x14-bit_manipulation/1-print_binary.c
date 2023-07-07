#include "main.h"

/**
 * print_binary - The  function that prints the
 *                binary representation of a number
 * @n: The number to convert to binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;

	bit = n & 1;
	n >>= 1;
	if (n == 0)
	{
		_putchar(bit + '0');
		return;
	}

	print_binary(n);
	_putchar(bit + '0');

}
