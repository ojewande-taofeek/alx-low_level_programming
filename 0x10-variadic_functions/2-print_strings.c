#include "variadic_functions.h"

/**
 * print_strings - The function prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * Return: Nothing
 *         if separator == NULL, don't print
 *         if string == NULL, print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_args;
	unsigned int idx = 0;
	char *str;

	va_start(str_args, n);
	while (idx < n)
	{
		str = va_arg(str_args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (idx < (n - 1) && separator != NULL)
			printf("%s", separator);
		idx++;
	}
	va_end(str_args);
	printf("\n");
}
