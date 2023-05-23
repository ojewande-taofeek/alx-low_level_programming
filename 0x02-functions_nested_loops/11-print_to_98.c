#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - The function prints all natural numers from n to 98
 *                followed by a new line
 * @n: The formal argument of type int
 * Return: Nothing
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98;)
		{
			if (a < 0)
			{
				_putchar('-');
				a *= -1;
			}
			if (a >= 10)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
			a = n;
		}
	}
	else
	{
		for (a = n; a > 98; a--)
		{
			if (a >= 100 && a < 1000)
			{
				_putchar((a / 100) + '0');
				_putchar(((a / 10) % 10) + '0');
			}
			else
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
