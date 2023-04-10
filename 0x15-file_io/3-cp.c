#include "main.h"

void check_s(int s, int f, char *filename, char m);

/**
 * main - copy content of file from one to another.
 * @argc: argument count
 * @argv: passed argument.
 * Return: 1 or exit.
 */

int main(int argc, char *argv[])
{
	int src, dest, nr = 1024, wr, cl_src, cl_dest;
	unsigned int m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_s(src, -1, agv[1], 'o');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, m);
	check_s(dest, -1, argv[2], 'W');

	while (nr == 1024)
	{
		nr = read(src, buf, sizeof(buf));
		if (nr == -1)
			check_s(-1, -1, argv[1], 'O');
		wr = write(dest, buf, nr);
		if (wr == -1)
			check_s(-1, -1, argv[2], 'W');
	}
	cl_src = close(src);
	check_s(cl_src, src, NULL, 'C');
	cl_dest = close(dest);
	check_s(cl_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_s - checks for a file that can be open/close.
 * @s: descriptor of opend
 * @filename: name of file
 * @m: open or close.
 * @f: descriptor.
 * Return: None.
 */

void check_s(int s, int f, char *filename, char m)
{
	if (m == 'C' && s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
	else if (m == 'O' && s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (m == 'W' && s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
