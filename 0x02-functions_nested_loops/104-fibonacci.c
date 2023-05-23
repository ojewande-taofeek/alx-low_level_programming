#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Return: Always 0
 */

int main(void)
{
	unsigned long int first = 1, second = 2, third;
	int n;

	printf("1, 2,");
	for (n = 3; n <= 98; n++)
	{
		third = first + second;
		printf(" %lu", third);
		if (n < 98)
			printf(",");
		first = second;
		second = third;
	}
	printf("\n");
	return (0);
}
