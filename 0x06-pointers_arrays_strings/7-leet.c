#include "main.h"

/**
 * leet - The function that encodes a string into 1337
 * @str: the fromal parameter for a string constant
 * Return: str
 */

char *leet(char *str)
{
	char code[] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};
	int idx = 0, cidx, n = sizeof(code) / sizeof(char), check;

	for (; str[idx]; idx++)
	{
		for (cidx = 0; cidx < n; cidx++)
		{
			check = code[cidx] - 32;
			if ((code[cidx] >= 'a' && code[cidx] <= 'z') && 
				((str[idx] == code[cidx]) ||
					(str[idx] == check)))
				str[idx] = code[cidx + 1];
		}
	}

	return (str);
}
