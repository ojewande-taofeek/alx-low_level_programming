#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme prints single digits of base 10
 * Return: 0
 */

int main(void)
{
	char singles = '0';

	while (singles <= '9')
	{
		putchar(singles);
		singles++;
	}
	putchar('\n');

	return (0);
}
