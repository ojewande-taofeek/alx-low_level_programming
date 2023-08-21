#include "main.h"

/**
 * _strpbrk - The function searches a string for any of a set of bytes
 * @s: The string constant to search
 * @accept: The string constant whose any bytes is to be searched
 * Return: A pointer to the byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = ptr;
		s++;
	}
	return (NULL);
}
