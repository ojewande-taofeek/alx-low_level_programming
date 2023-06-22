#include "variadic_functions.h"

/**
 * print_numbers - The function prints numbers, followed by a new line
 * @separator: The string constant for the delimiter
 * @n: The number of arguments to print
 * Return: exit(0), if separator == NULL || n == 0
 *         nothing, if successful
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_args;
	unsigned int idx = 0;

	va_start(print_args, n);
	while (idx < n)
	{
		printf("%d", va_arg(print_args, int));
		if (idx < (n - 1) && separator != NULL)
			printf("%s", separator);
		idx++;
	}
	printf("\n");
	va_end(print_args);
}
