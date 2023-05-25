#include "main.h"

/**
 * print_number - The function prints an integer
 * @n: The number to be printed formal argument
 * Return: 0
 */

void print_number(int n)
{
	int div = DIV_INIT;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= DIV_CHECK)
		div *= 10;
	while (div > DIV_MIN)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
}
