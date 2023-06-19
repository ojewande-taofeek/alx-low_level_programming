#include <stdio.h>
#include <stdlib.h>

/**
 * main - The programme prints the name of the file it was compiled from
 *        followed by a new line
 * Return: EXIT_SUCCESS, if successful
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (EXIT_SUCCESS);
}
