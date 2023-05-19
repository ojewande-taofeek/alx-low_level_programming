#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme prints lowercase followed by a new line
 * Return: 0
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
