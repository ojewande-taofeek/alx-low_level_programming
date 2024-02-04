#include "main.h"

/**
 * _strlen - The function returns the length of a string
 * @s: The pointer of the formal paramter of string constant
 * Return: the lenght of the string constant
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s; s++, len++)
		;
	return (len);
}
