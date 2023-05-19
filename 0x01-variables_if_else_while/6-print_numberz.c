#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme prints single numbers of base 10 without using
 *              variable char
 * Return: 0
 */

int main(void)
{
	int singles = 0;

	while (singles < 10)
	{
		putchar('0' + singles);
		singles++;
	}

	putchar('\n');

	return (0);
}
