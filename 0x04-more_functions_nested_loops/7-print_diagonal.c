#include "main.h"

/**
 * print_diagonal - The function draws a diagonal line on the terminal
 * @n: Number of lines to be printed
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int slash = 0, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (slash < n)
		{
			_putchar('\\');
			_putchar('\n');
			slash++;
			if (slash == n)
				break;
			else
			{
				for (space = 0; space < slash; space++)
					_putchar(' ');
			}
		}
	}
}
