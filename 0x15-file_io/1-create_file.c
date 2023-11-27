#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file to be created.
 * @text_content: content to be given to the file.
 * Return: 1 on Success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, _write, nlet;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,  0600);

	if (fd == -1)
		return (-1);

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	_write = write(fd, text_content, nlet);

	if (_write == -1)
		return (-1);

	close(fd);
	return (1);
}
