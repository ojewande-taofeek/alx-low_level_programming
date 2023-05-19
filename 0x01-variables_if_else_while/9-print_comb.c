#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme prints all possible combinations of single-digits
 *              separated by , and space
 * Return: 0
 */

int main(void)
{
	int singles = 0;

	while (singles < 10)
	{
		putchar(singles + '0');
		if (singles < 9)
		{
			putchar(',');
			putchar(' ');
		}
		singles++;
	}
	putchar('\n');
	return (0);
}
