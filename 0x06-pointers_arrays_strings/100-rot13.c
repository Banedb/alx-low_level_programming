#include "main.h"

/**
 * rot13 - rotates characters by 13 spots
 * @str: string to convert
 *
 * Return: rotated chars
 */
char *rot13(char *str)
{
	int i, j;
	char alf[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (str[i] == alf[j])
			{
				str[i] = rot[j];
				break;
			}
	return (str);
}
