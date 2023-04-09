#include "main.h"
/**
 * create_file - creates a file to fill with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 (Success) || -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file, n, x = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[n])
			n++;
		x = write(file, text_content, n);
		if (x != n)
			return (-1);
	}
	close(file);
	return (1);
}
