#include "main.h"
#include <string.h>

/**
 * str_concat - The function concatenates two strings
 * @s1: The first string constant
 * @s2: The second string constant
 * Return: Contents of s1, followed by the contents of s2 and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int idx = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		str = NULL;
		return (NULL);
	}
	str = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (str != NULL)
	{
		while (*s1)
		{
			*(str + idx) = *(s1);
			s1++;
			idx++;
		}
		while (*s2)
		{
			*(str + idx) = *(s2);
			s2++;
			idx++;
		}
		*(str + idx) = '\0';
	}
	return (str);
}
