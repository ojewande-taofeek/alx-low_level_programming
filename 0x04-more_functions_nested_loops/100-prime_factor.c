#include <stdio.h>

/**
 * main - The entry point
 * Description: The programme finds and prints the largest factor
 *              of the number 612852475143 followed by a new line
 * Return: 0
 */

int main(void)
{
	long int value = 612852475143, div = 2, remainder;

	while (1)
	{
		if (value % div == 0)
		{
			remainder = value / div;
			value = remainder;
		}
		else
			div++;
		if (remainder == div)
		{
			printf("%ld\n", div);
			break;
		}
	}

	return (0);
}
