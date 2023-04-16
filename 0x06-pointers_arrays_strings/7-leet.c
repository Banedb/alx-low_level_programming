#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char num[] = {'4', '3', '0', '7', '1'};
	char alf[] = {'a', 'e', 'o', 't', 'l'};
	char ALF[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
			if ((str[i] == alf[j]) || (str[i] == ALF[j]))
				str[i] = num[j];
	return (str);
}
