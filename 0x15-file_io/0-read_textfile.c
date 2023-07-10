#include "main.h"

/**
 * read_textfile - The function that reads a text file and prints it
 *                 to the POSIX standard output
 * @filename: The name of file to be processed.
 * @letters: The number of letters it should read and print
 * Return: 0, filename == NULL, file can not be opened
 *         write fails or does not write
 *         Otherwise, return the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_byte, w_byte, counter;
	char *str;
	FILE *fptr;

	fd = open(filename, O_RDWR);
	fptr = fopen(filename, "r");

	if ((filename == NULL) | (fd < 0) | (fptr == NULL))
		return (0);
	while (fgetc(fptr) != EOF)
		counter++;
	str = malloc(counter * sizeof(char));
	if (str == NULL)
		return (0);
	r_byte = read(fd, str, letters);
	w_byte = write(STDOUT_FILENO, str, letters);
	if (w_byte < 0)
		return (0);
	free(str);
	close(fd);
	return (r_byte);
}
