#include <stdio.h>
#include "main.h"

/**
 * print_times_table - The function prints the n times, starting with 0
 *                      Does not pring if n is < than 0 or > than 15
 * @n: The formal argument of type int
 * Return: Nothing
 */

void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (column == 0)
				{
					_putchar(0 + '0');
					_putchar(',');
				}
				else if (column >= 1)
				{
					_putchar(' ');
					if (product >= 100)
					{
						_putchar((product / 100) + '0');
						_putchar(((product / 10) % 10) + '0');
					}
					else if (product >= 10)
					{
						_putchar(' ');
						_putchar((product / 10) + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((product % 10) + '0');
					if (column < n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
