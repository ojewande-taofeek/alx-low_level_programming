#include <stdio.h>

/**
 * _strncpy - The function copies a string of "n" bytes
 * @dest: The string constant to copy to
 * @src: The string constant to copy from
 * @n: The number of bytes to copy from src
 * Return: The dest string constant
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	while (idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	return (dest);
}
