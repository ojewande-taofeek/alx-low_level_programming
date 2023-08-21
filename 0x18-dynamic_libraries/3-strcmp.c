#include "main.h"

/**
 * _strcmp - The function comapares two strings
 * @s1: The formal parameter for string 1
 * @s2: The formal parameter for string 2
 * Return: the diff
 */

int _strcmp(char *s1, char *s2)
{
	int idx = 0, diff;

	while (s1[idx] || s2[idx])
	{
		diff = s1[idx] - s2[idx];
		if ((s1[idx] > s2[idx]) || (s1[idx] < s2[idx]))
			break;
		idx++;
	}
	return (diff);
}
