#include "main.h"

/**
 * puts_half - The function prints half of a string, followed by a new line.
 * @str: The string contant pointer
 * Return: Nothing
 */

void puts_half(char *str)
{
	int idx, len, half;

	for (len = 0; str[len]; len++)
		;
	half = len / 2;
	if (len % 2 != 0)
		half++;
	for (idx = half; idx < len; idx++)
		_putchar(str[idx]);
	_putchar('\n');
}
