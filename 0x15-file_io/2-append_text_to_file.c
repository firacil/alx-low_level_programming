#include "main.h"

/**
 * append_text_to_file - appends text.
 * @filename: name of file.
 * @text_content: content append to file.
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int ln;
	int r_w;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (ln = 0; textcontent[ln]; ln++)
			;
		r_w = write(f, text_content, ln);

		if (r_w == -1)
			return (-1);
	}
	close(f);
	return (1);
}
