#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (NULL);

	arr = malloc((sizeof(c) * size) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[i] = '\0';
	return (arr);
}
