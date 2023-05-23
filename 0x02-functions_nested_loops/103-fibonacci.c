#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Return: 0
 */

int main(void)
{
	long int first = 1, second = 2, third, sum = 2;

	for(; (third = first + second) <= 4000000;)
	{
		if ((third % 2) == 0)
			sum += third;
		first = second;
		second = third;
	}
	printf("%ld\n", sum);
	return (0);
}
