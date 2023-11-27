#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to be appended.
 * @text_content: content of the text.
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write, nletters = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[nletters])
			nletters++;

		_write = write(fd, text_content, nletters);

		if (_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
