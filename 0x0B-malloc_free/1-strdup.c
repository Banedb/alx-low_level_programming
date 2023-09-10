#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *buf;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	buf = malloc(sizeof(char) * i);

	if (buf == NULL)
		return (NULL);

	for (j = 0; *(str + j) != '\0'; j++)
		buf[j] = str[j];
	buf[j] = '\0';
	return (buf);
}
