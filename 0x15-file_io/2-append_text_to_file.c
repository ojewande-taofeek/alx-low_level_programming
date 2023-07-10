#include "main.h"

/**
 * append_text_to_file - The function that appends text at the end of a file.
 * @filename: The name of the file
 * @text_content: The content of the file
 * Return: 1, if successful
 *         -1, if otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_byte;

	fd = open(filename, O_RDWR | O_APPEND);
	if ((fd < 0) || (filename == NULL))
		return (-1);
	if (text_content != NULL)
	{
		w_byte = write(fd, text_content, strlen(text_content));
		if (w_byte < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
