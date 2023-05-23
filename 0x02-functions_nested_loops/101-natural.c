#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Return: sum of all multiples of 3 and 5 below 1024 inclusive
 */

int main(void)
{
	int three = 0, five = 0, sum, n;

	for (n = 0; n <= 1024; n++)
	{
		if ((n % 5) == 0)
			five += n;
		else if ((n % 3) == 0)
			three += n;
	}
	sum = five + three;
	printf("%d\n", sum);
	return (0);
}
