#include "variadic_functions.h"

/**
 * sum_them_all - The function returns the sum of all its parameters
 * @n: The formal parameter of number of expected arguments
 * Return: sum of the arguments, if successful
 *         0, if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_arg;
	unsigned int sum = 0, idx = 0;

	if (n == 0)
		return (0);

	va_start(sum_arg, n);
	while (idx < n)
	{
		sum += va_arg(sum_arg, unsigned int);
		idx++;
	}
	va_end(sum_arg);
	return (sum);
}
