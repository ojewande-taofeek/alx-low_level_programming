#include "main.h"
#include <string.h>

/**
 * string_nconcat - The function concatenates two strings
 * @s1: The first string constant
 * @s2: The second string constant
 * @n: Number of bytes of s2 to be concatenated to s1
 * Return: concatenates string, if successful
 *         NULL, if otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, jdx;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (idx = 0; s1[idx]; idx++)
		ptr[idx] = s1[idx];
	for (jdx = 0; (jdx < n) && (s2[jdx]); jdx++, idx++)
		ptr[idx] = s2[jdx];
	ptr[idx] = '\0';

	return (ptr);
}
