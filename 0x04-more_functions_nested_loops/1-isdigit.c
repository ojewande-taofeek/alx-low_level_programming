#include "main.h"

/**
 * _isdigit - The function checks for a digit (0 through 9)
 * @c: The formal argument of type int
 * Return: 1 if c is a digit or 0, if otherwise
 */

int _isdigit(int c)
{
	char digit = '0';

	for (; digit <= '9'; digit++)
	{
		if (c == digit)
			return (1);
	}
	return (0);
}
