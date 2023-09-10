#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 (Success) || -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, a, b = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(file, text_content, b);
		if (a != b)
			return (-1);
	}

	close(file);
	return (1);
}
