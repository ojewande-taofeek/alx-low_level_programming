#include "main.h"

/**
 * print_numbers - The function that prints the numbers, from 0 to 9
 *                 followed by a new line
 * Return: Nothing
 */

void print_numbers(void)
{
	char digit = '0';

	for (; digit <= '9'; digit++)
		_putchar(digit);
	_putchar('\n');
}
