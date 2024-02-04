#include <stdio.h>
#include "main.h"

/**
 * _islower - A function that checks for lowercase
 * @c: the int formal argument to supply
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
