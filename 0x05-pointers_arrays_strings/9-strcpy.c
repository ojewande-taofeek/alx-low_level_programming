#include "main.h"

/**
 * _strcpy - The function copies the string pointed to by src, including the
 *           terminating null byte(\0) to the buffer pointed to by dest
 * @dest: The butter toc opy to
 * @src: The buffer to copy from
 * Return: The pointer to dest
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
