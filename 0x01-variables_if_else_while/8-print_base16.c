#include <stdio.h>

/**
 * main - the entry point
 * Description: The programme prints all numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int hex_number = 0, hex_reminder, hex_updated;

	while (hex_number < 16)
	{
		if (hex_number < 10)
			putchar(hex_number + '0');
		else
		{
			hex_reminder = hex_number % 10;
			hex_updated = 97 + hex_reminder;
			putchar(hex_updated);
		}
		hex_number++;
	}
	putchar('\n');
	return (0);
}
