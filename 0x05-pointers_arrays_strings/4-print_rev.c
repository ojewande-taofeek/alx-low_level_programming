#include "main.h"

/**
 * print_rev - The function prints a string, in reverse, followed by a new line
 * @s: The string constant pointer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	len--;
	for (; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
