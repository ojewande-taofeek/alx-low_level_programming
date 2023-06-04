#include "main.h"

/**
 * puts2 - Function prints every other character of a string
 *         starting with the first character, followed by a new line
 * @str: The sting constant formal paramter
 * Return: Nothing
 */

void puts2(char *str)
{
	int idx = 0;

	while (*str)
	{
		if (idx % 2 == 0)
			_putchar(*str);
		idx++;
		str++;
	}
	_putchar('\n');
}
