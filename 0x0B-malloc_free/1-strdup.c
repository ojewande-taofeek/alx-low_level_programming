#include "main.h"
#include <string.h>

/**
 * _strdup - The function returns a pointer to a newly allocated space in
 *           memory, which conatins a copy of the string given as a parameter
 * @str: The string constant formal parameter
 * Return: A pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int idx = 0;
	char *dup;

	if (str == NULL)
	{
		dup = NULL;
		return (dup);
	}
	dup = (char *) malloc((strlen(str) + 1) * sizeof(char));
	if (dup != NULL)
	{
		while (*str)
		{
			*(dup + idx) = *(str);
			idx++;
			str++;
		}
	}
	return (dup);
}
