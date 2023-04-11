#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, 1.
 *         On failure, -1 and set errno appropriately.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, length);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
