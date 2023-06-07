#include "main.h"

/**
 * _print_rev_recursion - The function prints a string in reverse
 * @s: The pointer to a string constant
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
