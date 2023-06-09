#include "main.h"

/**
 * main - The program multiplies two numbers
 * @argc: The argument count of type int
 * @argv: The argument vector that points to an array of strings
 * Return: EXIT_SUCCESS, if successful
 *         1, if otherwise
 */

int main(int argc, char *argv[])
{
	int idx, mul = 1;

	if (argc == 3)
	{
		for (idx = 1; idx < argc; idx++)
			mul *= atoi(argv[idx]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (EXIT_SUCCESS);
}
