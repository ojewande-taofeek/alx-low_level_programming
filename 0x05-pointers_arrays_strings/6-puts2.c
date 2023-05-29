#include "main.h"

/**
 * puts2 - The function prints every other characters of a string, starting
 *         with the first character, followed by a new line.
 * @str: The pointer to a string constant
 * Return: Nothing
 */

void puts2(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		if (idx % 2 == 0)
			_putchar(str[idx]);
		idx++;
	}
	_putchar('\n');
}
