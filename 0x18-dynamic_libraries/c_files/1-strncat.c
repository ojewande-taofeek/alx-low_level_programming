#include <stdio.h>

/**
 * _strncat - The function concatenates two strings
 *            it usses at most "n" bytes from src
 * @dest: The string constant to concatenate to
 * @src: The string constant to concatenate from
 * @n: The number of bytes to concatenate from src
 * Return: The dest string constant
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, idx = 0;

	for (; dest[len]; len++)
		;
	for (; src[idx] && idx < n; idx++, len++)
		dest[len] = src[idx];
	dest[len] = '\0';
	return (dest);
}
