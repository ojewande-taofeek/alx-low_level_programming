#include "main.h"

/**
 * leet - The function that encodes a string into 1337
 * @str: the fromal parameter for a string constant
 * Return: str
 */

char *leet(char *str)
{
	int idx = 0;

	for (; str[idx]; idx++)
	{
		if (str[idx] == 'a' || str[idx] == 'A')
			str[idx] = '4';
		if (str[idx] == 'e' || str[idx] == 'E')
			str[idx] = '3';
		if (str[idx] == 'o' || str[idx] == 'O')
			str[idx] = '0';
		if (str[idx] == 't' || str[idx] == 'T')
			str[idx] = '7';
		if (str[idx] == 'l' || str[idx] == 'L')
			str[idx] = '1';
	}

	return (str);
}
