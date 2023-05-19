#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme prints lowercase in reverse order
 * Return: 0
 */

int main(void)
{
	int lower = 122;

	while (lower >= 97)
	{
		putchar(lower + '0');
		lower--;
	}
	putchar('\n');

	return (0);
}
