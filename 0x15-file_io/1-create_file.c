#include"main.h"

/**
 * create_file - create file.
 * @filename: name of file.
 * @text_content: content in file.
 * Return: 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int f, ln, r_w;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (ln = 0; text_content[ln]; ln++)
		;
	r_w = write(f, text_content, ln);

	if (r_w == -1)
		return (-1);
	close(f);
	return (1);
}
