#include "function_pointers.h"

/**
 * print_name - The function that prints a name
 * @name: A pointer to a string constant
 * @f: A funtion pointer that takes name as argument and returns nothing
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(0);
	f(name);
}
