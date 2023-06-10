#include "main.h"

/**
 * main - The program adds positive numbers
 * @argc: The argument count of type int
 * @argv: The argument vector that points to an array of strings
 * Return: Print 0, if no number is passed
 *         Print Error, and return 1 if other symbols and not digits are passed
 */

int main(int argc, char *argv[])
{
	int idx, digit, sum = 0;
	char *check;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (idx = 1; idx < argc; idx++)
		{
			check = argv[idx];
			for (; *check; check++)
			{
				if (*check >= '0' && *check <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			digit = atoi(argv[idx]);
			sum += digit;
		}
		printf("%d\n", sum);
	}
	return (EXIT_SUCCESS);
}
