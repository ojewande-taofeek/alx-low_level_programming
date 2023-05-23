#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - A function prints lowercase 10x followed by a new line
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char lower_case;
	int idx = 0;

	while (idx < 10)
	{
		for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
			_putchar(lower_case);
		_putchar('\n');
		idx++;
	}
}
