#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme all lowercase except q and e
 * Return: 0
 */

int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		if ((lower_case == 'q') || (lower_case == 'e'))
			continue;
		putchar(lower_case);
		lower_case++;
	}

	putchar('\n');

	return (0);
}
