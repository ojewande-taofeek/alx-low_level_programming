#include "main.h"

/**
 * create_file - The function creates a file.
 * @filename: The pointer to the filename
 * @text_content: The pointer to the text content
 * Return: 1, if successful
 *         -1, if otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, r_byte, w_byte;

	fd = open(filename, O_CREAT | O_RDWR  | O_TRUNC, 0600);
	if ((fd < 0) || (filename == NULL))
		return (-1);
	r_byte = read(fd, text_content, strlen(text_content));
	if (r_byte < 0)
		return (-1);
	w_byte = write(fd, text_content, strlen(text_content));
	if (w_byte < 0)
		return (-1);
	close(fd);
	return (1);
}
