#include <stdio.h>
#include "main.h"

/**
 * _isalpha - The function checks for alphabetic character
 * @c: The int formal argument to input
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
