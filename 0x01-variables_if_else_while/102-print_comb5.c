#include <stdio.h>

/**
 * main - the entry point
 * Des: The program prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int a, b, a1, a2, b1, b2;

	for (a = 0; a < 99; a++)
	{
		a1 = a / 10;
		a2 = a % 10;
		for (b = a + 1; b < 100; b++)
		{
			b1 = b / 10;
			b2 = b % 10;
			putchar(a1 + '0');
			putchar(a2 + '0');
			putchar(' ');
			putchar(b1 + '0');
			putchar(b2 + '0');
			if (!((a == 98) && (b == 99)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
