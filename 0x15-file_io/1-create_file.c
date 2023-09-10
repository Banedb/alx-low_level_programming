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
	int file, len, bw;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		bw = write(file, text_content, len);
		if (bw != len)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
