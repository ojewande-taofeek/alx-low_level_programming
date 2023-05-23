#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Return: Always 0
 */

int main(void)
{
	long int first = 1, second = 2, third;
	int n;

	printf("1, 2,");
	for (n = 3; n <= 50; n++)
	{
		third = first + second;
		printf(" %ld", third);
		if (n < 50)
			printf(",");
		first = second;
		second = third;
	}
	printf("\n");
	return (0);
}
