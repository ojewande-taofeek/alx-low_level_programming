#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - A function prints lowercase 10x followed by a new line
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int idx = 0;

	while (idx < 10)
	{
		print_alphabet();
		idx++;
	}
}
