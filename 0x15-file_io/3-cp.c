#include "main.h"

/**
 * cbuf - function allocates 1024 bytes for buffer.
 * @file: pointer to the file.
 * Return: pointer to newly allocated buffer.
 */
char *cbuf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't Write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * file_closer - function that close the file descriptor.
 * @fd: file descriptor to be closed.
 * Return: None.
 */
void file_closer(int fd)
{
	int c_lose;

	c_lose = close(fd);

	if (c_lose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't Close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy content of file to another file.
 * @argc: counter of no of arguments on program.
 * @argv: array of charachter listing arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, reader, writer;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = cbuf(argv[2]);

	file_from = open(argv[1], O_RDONLY);

	reader = read(file_from, buf, 1024);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || reader == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		writer = write(file_to, buf, reader);
		if (file_to == -1 || writer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		reader = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (reader > 0);
	free(buf);
	file_closer(file_from);
	file_closer(file_to);
	return (0);
}
