#include "main.h"

/**
 * rot13 - rotates characters by 13 spots
 * @str: string to convert
 *
 * Return: rotated chars
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M')
		    || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] = str[i] + 13;
		else if ((str[i] > 'M' && str[i] <= 'Z')
			 || (str[i] >= 'm' && str[i] <= 'z'))
			str[i] = str[i] - 13;
	}
	return (str);
}
