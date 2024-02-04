#include "main.h"

/**
 * _strcat - The function concantenates two strings
 * @dest: The formal parameter of the string constant to copy to
 * @src: The formal parameter of the string constant to copy from
 * Return: The dest string
 */

char *_strcat(char *dest, char *src)
{
	int len, idx;

	for (len = 0; dest[len]; len++)
		;
	idx = 0;
	while (src[idx])
	{
		dest[len] = src[idx];
		len++;
		idx++;
	}
	dest[len] = '\0';
	return (dest);
}
