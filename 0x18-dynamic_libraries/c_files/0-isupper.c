#include "main.h"

/**
 * _isupper - The function checks for uppercase character
 * @c: The formal argument of type int
 * Return: 1 if c is uppercase or 0, if otherwise
 */

int _isupper(int c)
{
	int upper_case = 65;

	while (upper_case <= 90)
	{
		if (c == upper_case)
			return (1);
		upper_case++;
	}
	return (0);
}
