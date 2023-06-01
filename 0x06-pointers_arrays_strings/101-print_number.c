#include "main.h"

/**
 * print_number - The function prints integer
 * @n: The formal parameter for int to be passed
 * Return: Nothing
 */

void print_number(int n)
{
	int div;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	div = 1;
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
}
