#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - the function that prints lowercase followed by a new line.
 * Return: Nothing
 */

void print_alphabet(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		_putchar(lower_case);
		lower_case++;
	}
	_putchar('\n');
}
