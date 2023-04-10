#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read a text file, prints it to posix.
 * @filename: name of file to be read.
 * @letters: number of letters.
 * Return: number.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rl, wl;
	char *buf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(f);
		return (0);
	}

	rl = read(f, buf, letters);
	close(f);

	if (rl == -1)
	{
		free(buf);
		return (0);
	}
	wl = write(STDOUT_FILENO, buf, rl);
	free(buf);
	if (rl != wl)
		return (0);
	return (wl);
}
