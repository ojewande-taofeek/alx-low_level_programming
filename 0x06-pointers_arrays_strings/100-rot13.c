#include "main.h"

/**
 * rot13 - The function encodes a string using rot13
 * @str: The formal parameter for string constant
 * Return: str
 */

char *rot13(char *str)
{
	int idx = 0, j;
	char str1[] = "abcdefghijklmABCDEFGHIJKLM";
	char str2[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";
	char *ptr1 = str1;
	char *ptr2 = str2;

	while (str[idx])
	{
		for (j = 0; j < 26; j++)
		{
			if (str[idx] == ptr1[j])
				str[idx] += 13;
			else if (str[idx] == ptr2[j])
				str[idx] -= 13;
		}
		idx++;
	}
	return (str);
}
