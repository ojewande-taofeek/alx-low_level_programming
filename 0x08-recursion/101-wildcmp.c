#include "main.h"

/**
 * wildcmp - The function compares two strings
 *           s2 can contain the special character *
 *           The * can replace any string (including an empty)
 * @s1: The string constant
 * @s2: The string constant that conatains *
 * Return: 1, if the strings can be considered identical
 *         0, if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (((wildcmp(s1, (s2 + 1)))) || (wildcmp((s1 + 1), s2)));
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	return (0);
}
