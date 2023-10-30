#include "main.h"
/**
 * read_textfile - reads a text file and prints it to std/o
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed || 0 (Failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, i, n;
	char *buf;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(file, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(file);
	n = write(STDOUT_FILENO, buf, i);
	if (n < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (n);
}
