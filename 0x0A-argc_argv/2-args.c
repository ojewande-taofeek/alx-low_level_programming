#include "main.h"

/**
 * main - The program prints all arguments it receives
 * @argc: The argument count of type int
 * @argv: The argument vector that points to the array of strings
 * Return: EXIT_SUCCESS, if successful
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (EXIT_SUCCESS);
}
