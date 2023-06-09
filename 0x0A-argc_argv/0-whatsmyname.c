#include "main.h"

/**
 * main - The program prints its name, followed by a new line
 *        If the program is renamed, it will print the new name,
 *        without havng to compile it again
 * @argc: The argument count of type int
 * @argv: The argument vector that points to the array of strings
 * Return: EXIT_SUCCESS
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
