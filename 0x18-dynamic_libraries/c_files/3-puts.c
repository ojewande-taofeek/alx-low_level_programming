#include "main.h"

/**
 * _puts - The function prints a string, followed by a new line
 * @str: The pointer to a string constant
 * Return: Nothing
 */

void _puts(char *str)
{
	int idx, len;

	for (len = 0; str[len]; len++)
		;
	for (idx = 0; idx < len; idx++)
		_putchar(str[idx]);
	_putchar('\n');
}
