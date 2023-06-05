#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: The string constant pointer
 * @c: The character to locate
 * Return: NULL, if no character matches
 *         s, starting with located character
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}
