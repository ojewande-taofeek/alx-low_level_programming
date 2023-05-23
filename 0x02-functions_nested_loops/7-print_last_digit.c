#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - The function that prints and returns
 *                     the last digit of a number
 * @t: The placeholder of the number to be inputted
 * Return: last digit
 */

int print_last_digit(int t)
{
	int last_dig = t % 10;

	if (last_dig < 0)
		last_dig *= -1;
	_putchar(last_dig + '0');
	return (last_dig);
}
