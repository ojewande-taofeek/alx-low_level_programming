#include <stdio.h>

/**
 * main - The entry point
 * Description: The programme prints 1 to 100
 *              Prints Fizz for multiples of 3
 *              Prints Buzz for multiples of 5
 *              Prints FizzBuzz for multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int digit = 1;

	while (digit <= 100)
	{
		if ((digit % 5 == 0) && (digit % 3 == 0))
			printf("FizzBuzz");
		else if (digit % 5 == 0)
			printf("Buzz");
		else if (digit % 3 == 0)
			printf("Fizz");
		else
			printf("%d", digit);
		if (digit < 100)
			printf(", ");
		digit++;
	}
	printf("\n");
	return (0);
}
