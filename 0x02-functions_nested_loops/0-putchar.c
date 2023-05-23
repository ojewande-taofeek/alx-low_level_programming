#include <stdio.h>
#include "main.h"

/**
 * main - the entry point
 * Description: The programme prints _putchar followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char first[] = "_putchar";
	char *ptr = first;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
	return (0);
}
