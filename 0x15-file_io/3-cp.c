#include "main.h"
#define BUFFER 1024

void copy_from_to(const char *file_from, const char *file_to);

/**
 * main - The main file
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_from_to(argv[1], argv[2]);
	return (0);
}

/**
 * copy_from_to - The fucntion that copies the content of a file to another
 * @file_from: The source file
 * @file_to: The destination file
 * Return: exit(98), if file_from does not exist
 *          exit(99), if file_to can not be written to
 *          exit(100), if file descriptor can not be closed
 */
void copy_from_to(const char *file_from, const char *file_to)
{
	int fd_f, fd_t, r_byte, w_byte, c1_byte, c2_byte;
	char *buff;

	fd_f = open(file_from, O_RDONLY);
	if ((fd_f < 0) || (file_from == NULL))
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buff = malloc(sizeof(char) * BUFFER);
	if (buff == NULL)
		exit(98);
	r_byte = read(fd_f, buff, BUFFER);
	if (r_byte < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_t = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	w_byte = write(fd_t, buff, r_byte);
	if (w_byte < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	free(buff);
	c1_byte = close(fd_f);
	if (c1_byte < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_f);
		exit(100);
	}
	c2_byte = close(fd_t);
	if (c2_byte < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_t);
		exit(100);
	}
	chmod(file_to, 0664);
}
