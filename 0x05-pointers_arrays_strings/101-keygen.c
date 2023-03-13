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
	char set[95];
	char password[20];

	srand(time(NULL));
	for (l = 0; l < 94; l++)
		set[l] = (33 + l);

	for (i = 0; i < 20; i++)
	{
		password[i] = set[(rand() % 95)];
		printf("%c", password[i]);
	}
	return (0);
}
