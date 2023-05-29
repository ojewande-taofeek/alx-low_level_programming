#include "main.h"

/**
 * rev_string - The function reverses a string
 * @s: The pointer to a string constant
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len, idx;
	char keep;

	for (len = 0; s[len]; len++)
		;
	len--;
	for (idx = 0; idx < len; idx++, len--)
	{
		keep = s[len];
		s[len] = s[idx];
		s[idx] = keep;
	}
}
