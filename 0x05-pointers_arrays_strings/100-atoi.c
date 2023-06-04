#include "main.h"

/**
 * _atoi - The function converts a string to an integer
 * @s: The string constant pointer
 * Return: integer
 */

int _atoi(char *s)
{
	int idx = 0, sign = 1, tens = 1, numb, new_numb;

	while (s[idx])
	{
		if (s[idx] == '-')
			sign = -sign;
		else if (s[idx] >= '0' && s[idx] <= '9')
		{
			new_numb = s[idx] - '0';
			if (tens <= 1)
				numb = new_numb;
			else
				numb = (numb * tens) + new_numb;
		       tens = 10;
		}
		else if ((s[idx - 1] >= '0' && s[idx - 1] <= '9') && s[idx] == ' ')
			break;
		idx++;
	}
	if (numb >= 0)
	{
		numb = sign * numb;
		return (numb);
	}
	else
		return (0);
}
