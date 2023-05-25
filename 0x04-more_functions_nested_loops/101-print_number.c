#include "main.h"

/**
 * print_number - The function prints an integer
 * @n: The number to be printed formal argument
 * Return: 0
 */

void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n / div >= 10)
		div *= 10;
	while (div != 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
}
