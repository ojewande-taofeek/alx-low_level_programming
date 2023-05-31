#include "main.h"

/**
 * string_toupper - The function changes all lowercase letters of a string to
 *                  uppercase
 * @str: The formal parameter of string constant
 * Return: str
 */

char *string_toupper(char *str)
{
	int idx = 0, check = 'a' - 'A';

	while (str[idx])
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
			str[idx] -= check;
		idx++;
	}
	return (str);
}
