#include "main.h"
/**
 * create_file - creates a file to fill with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 (Success) || -1 (Failure)
 */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int create_file(const char *filename, char *text_content) {
	if (!filename) {
		return -1;
	}
	int fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
	if (fd == -1) {
		return -1;
	}
	if (text_content) {
		int len = strlen(text_content);
		int bytes_written = write(fd, text_content, len);
		if (bytes_written != len) {
			close(fd);
			return -1;
		}
	}
	close(fd);
	return 1;
}
