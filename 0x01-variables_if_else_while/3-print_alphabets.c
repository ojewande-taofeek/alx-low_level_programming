#include <stdio.h>

/**
 * main - the entry point
 * Description: This programme prints both lower and upper cases
 * Return: 0
 */

int main(void)
{
	char lower_case = 'a', upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}

	putchar('\n');

	return (0);
}
