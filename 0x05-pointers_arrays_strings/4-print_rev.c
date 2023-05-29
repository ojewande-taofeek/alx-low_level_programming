#include "main.h"

/**
 * print_rev - The function prints a string, in reverse, followed by a new line
 * @s: The pointer to a string constant
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;
	
	for (; s[len]; len++)
		;
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
