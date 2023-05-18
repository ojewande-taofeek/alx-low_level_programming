#include <stdio.h>
#include <unistd.h>

/**
 * main - the entry point
 * Des: The programme shows the use of "write" function to print
 *	how to use the unix std header
 * Return: 1
 */

int main(void)
{
	char qout[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, qout, sizeof(qout) - 1);
	return (1);
}
