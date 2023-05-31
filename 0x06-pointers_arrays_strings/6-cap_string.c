#include "main.h"

/**
 * cap_string - The function capitalizes all words of a string
 * @str: The formal parameter of the string constant
 * Return: str
 */

char *cap_string(char *str)
{
	int idx = 0;

	for (; str[idx]; idx++)
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			if ((str[0] >= 'a' && str[0] <= 'z') ||
					str[idx - 1] == ' ' ||
					str[idx - 1] == '\t' ||
					str[idx - 1] == '\n' ||
					str[idx - 1] == ',' ||
					str[idx - 1] == ';' ||
					str[idx - 1] == '.' ||
					str[idx - 1] == '!' ||
					str[idx - 1] == '?' ||
					str[idx - 1] == '"' ||
					str[idx - 1] == '(' ||
					str[idx - 1] == ')' ||
					str[idx - 1] == '{' ||
					str[idx - 1] == '}')
				str[idx] -= 32;
		}
	}
	return (str);
}
