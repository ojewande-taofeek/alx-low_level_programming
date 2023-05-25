#include "main.h"

/**
 * print_most_numbers - The function that prints the numbers, from 0 to 9
 *                 followed by a new line
 *                 Do not print 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	char digit = '0';

	for (; digit <= '9'; digit++)
	{
		if (digit == '2' || digit == '4')
			continue;
		_putchar(digit);
	}
	_putchar('\n');
}
