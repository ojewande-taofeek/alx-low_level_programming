#include "main.h"

/**
 * main - The program prints the number of arguments passed into it
 *         followed by a new line
 * @argc: The argument count
 * @argv: The argument vector that points to an array of strings
 * Return: EXIT_SUCCESS, if successful
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (EXIT_SUCCESS);
}
