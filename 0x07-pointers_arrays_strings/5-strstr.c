#include "main.h"

/**
 * _strstr - The function locates a substring
 * @haystack: The string constant to locate some bytes from
 * @needle: The string constant to locate
 * Return: A pointer to the beginning of the located substring
 *         or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr = haystack;

	while (*needle)
	{
		while (*haystack)
		{
			if (*needle == *haystack)
				return (needle);
			haystack++;
		}

		haystack = ptr;
		needle++;
	}
	return (NULL);
}
