#include "main.h"

/**
 * _strlen - The function returns the length of a string
 * @s: The pointer to a string constant
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
