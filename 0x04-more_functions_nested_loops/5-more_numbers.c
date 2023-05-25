#include "main.h"

/**
 * more_numbers - The function prints 10 times the numbers, from 0 t0 14
 *                followed by a new line
 * Return: Nothing
 */

void more_numbers(void)
{
	int digit, idx;

	for (idx = 0; idx < 10; idx++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
				_putchar((digit / 10) + '0');
			_putchar((digit % 10) + '0');
		}
	_putchar('\n');
	}
}
