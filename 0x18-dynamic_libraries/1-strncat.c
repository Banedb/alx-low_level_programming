#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @dest: first argument
 * @src: second argument to be added to first
 * @n: number
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
