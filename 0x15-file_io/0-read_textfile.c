#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX std_out.
 * @filename: the name of the file to be readed.
 * @letters:  the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ac, _write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	ac = read(fd, buf, letters);
	buf[ac] = '\0';

	_write = write(STDOUT_FILENO, buf, ac);

	close(fd);
	free(buf);

	return (_write);
}
