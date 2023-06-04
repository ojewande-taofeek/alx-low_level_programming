#include "main.h"

/**
 * _strcpy - The function copies the string pointed to by src
 *           including the terminating null byte (\0)
 *           , to the buffer pointed to by dest
 * @src: The string to copy from
 * @dest: The string to copy to
 * Return: the destinaton string
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
