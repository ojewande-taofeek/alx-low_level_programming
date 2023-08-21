#include <stdio.h>
#include "main.h"

/**
 * _abs - The function computes the absolute value of an integer
 * @k: The int formal argument
 * Return: Always positive
 */

int _abs(int k)
{
	if (k >= 0)
		k = k;
	else
		k *= -1;
	return (k);
}
