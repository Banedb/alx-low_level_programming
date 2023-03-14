#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, l;
	char set[256];
	char password[100];

	srand(time(NULL));
	for (l = 0; l < 256; l++)
		set[l] = l;

	for (i = 0; i < 100; i++)
	{
		password[i] = set[(rand() % 255)];
		printf("%c", password[i]);
	}
	return (0);
}
