#include <stdio.h>

int the_sqr_root(int n, int base);

/**
 * _sqrt_recursion - The function returns the natural square root of a number
 * @n: The number to find its natural root
 * Return: -1, if n < 0
 *          -1, if n is not a natural square
 *          1, if n == 1
 */

int _sqrt_recursion(int n)
{
	int base = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (the_sqr_root(n, base));
}

/**
 * the_sqr_root - Function that finds the square root without base = 0
 * @n: The number to find its square root
 * @base: The formal parameter for the root
 * Return: base, if root is found
 *          -1, if otherwise
 */

int the_sqr_root(int n, int base)
{
	if (n == base * base)
		return (base);
	if (base == (n / 2))
		return (-1);
	return (the_sqr_root(n, base + 1));
}
