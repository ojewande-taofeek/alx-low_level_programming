#include "variadic_functions.h"
#include <string.h>


/**
 * print_all - The function prints anything
 * @format: A list of types of arguments passed to the function
 * Return: Nothing
 *         print (nil), if str == NULL
 */

void print_all(const char * const format, ...)
{
	va_list all_args;
	int idx = 0;
	char *str, *delimiter = "";

	va_start(all_args, format);
	if (format)
	{
		while (format[idx])
		{
			switch (format[idx])
			{
				case 'c':
					printf("%s%c", delimiter, va_arg(all_args, int));
							break;
				case 'i':
					printf("%s%i", delimiter, va_arg(all_args, int));
							break;
				case 'f':
					printf("%s%f", delimiter, va_arg(all_args, double));
							break;
				case 's':
					str = va_arg(all_args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", delimiter, str);
					break;
				default:
				idx++;
				continue;
			}
			delimiter = ", ";
			idx++;
		}
	}
	printf("\n");
	va_end(all_args);
}
