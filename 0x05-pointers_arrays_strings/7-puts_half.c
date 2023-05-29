#include "main.h"

/**
 * puts_half - The function prints half of a string followed by a new line
 * @str: The pointer to a string constant
 * Return: Nothing
 */

void puts_half(char *str)
{
	int half, len = 0;

	for ( ; str[len]; len++)
		;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	else
		half = len / 2;
	for (; half < len; half++)
		_putchar(str[half]);
	_putchar('\n');
}
