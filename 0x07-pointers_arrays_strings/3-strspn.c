#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: The string constant to find "accept" from
 * @accept: The string constant to find its length from s
 * Return: the number of bytes in the initial segment of s which
 *         consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *ptr = s;

	while (*accept)
	{
		while (*s)
		{
			if (*accept == *s)
			{
				len++;
				break;
			}
			s++;
		}
		s = ptr;
		accept++;
	}
	return (len);
}
