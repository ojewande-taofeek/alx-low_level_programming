#include "main.h"

/**
 * print_line - The function drwas a staright line in the terminal
 * @n: The placeholder for the length of line to be printed
 * Return: Nothing
 */

void print_line(int n)
{
	int idx = 0;

	for (; (idx < n) && (n > 0); idx++)
		_putchar('_');
	_putchar('\n');
}
