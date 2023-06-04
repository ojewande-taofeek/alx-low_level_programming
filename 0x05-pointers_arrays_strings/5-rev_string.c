#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: The string constant to reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	int keep, len, idx, half;

	for (len = 0; s[len]; len++)
		;
	half = len / 2;
	len--;
	for (idx = 0; idx < half; idx++, len--)
	{
		keep = s[len];
		s[len] = s[idx];
		s[idx] = keep;
	}
}
