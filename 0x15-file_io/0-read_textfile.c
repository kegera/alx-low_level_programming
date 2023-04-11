#include "main.h"
#include <stdlib.h>

/**
 * write_text_to_file - Writes text to a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to write to the file.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can write to the file.
 */
ssize_t write_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w, len = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	w = write(o, text_content, len);

	if (o == -1 || w == -1 || w != len)
	{
		close(o);
		return (0);
	}

	close(o);

	return (w);
}
