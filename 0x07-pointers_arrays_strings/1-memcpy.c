#include "main.h"

/**
 * _memcpy - Function that copy memory areas
 * @dest: The steing constant to copy to
 * @src: The steing constant to copy from
 * @n: The number of bytes constant to copy from src
 * Return: The destination string constant
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx = 0;

	while (idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	return (dest);
}
