#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme prints the smallest combo of two digits
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
