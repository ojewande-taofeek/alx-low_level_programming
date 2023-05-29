#include "main.h"

/**
 * _puts - The function prints a string, followed by a new line, to stdout
 * @str: The pointer to a string constant
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
