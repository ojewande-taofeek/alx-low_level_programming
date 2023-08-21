#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: The string constant pointer
 * @b: The constant byte to copy
 * @n: The number of bytes to copy
 * Return: the string constant s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx = 0;

	while (idx < n)
	{
		s[idx] = b;
		idx++;
	}
	return (s);
}
