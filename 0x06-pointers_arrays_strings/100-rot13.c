#include "main.h"

/**
 * rot13 - The function encodes a string using rot13
 * @str: The formal parameter for string constant
 * Return: str
 */

char *rot13(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		while ((str[idx] >= 'a' && str[idx] <= 'z') ||
				(str[idx] >= 'A' && str[idx] <= 'Z'))
		{
			if ((str[idx] >= 'a' && str[idx] <= 'm') ||
					(str[idx] >= 'A' && str[idx] <= 'M'))
				str[idx] += 13;
			else
				str[idx] -= 13;
			idx++;
		}
		idx++;
	}
	return (str);
}
