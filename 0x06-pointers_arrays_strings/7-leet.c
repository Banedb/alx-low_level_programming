#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @str: string to code
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char num[] = "4433007711";
	char alfs[] = "AaEeOoTtLl";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
			if (str[i] == alfs[j])
				str[i] = num[j];
	return (str);
}
