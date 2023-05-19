#include <stdio.h>

/**
 * main - the entry point
 * Description: The program prints all possible diffrent combinations of three
 *               digits
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = 1; b < 9; b++)
		{
			for (c = 2; c < 10; c++)
			{
				if ((a < b) && (b < c))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if ((a < 7) || (b < 8) || (c < 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
